# docs

## let’s talk about some essential concepts before diving into the actual implementation of containers :

# 1 - exception safety and RAII

- resources
    - [https://en.wikipedia.org/wiki/Call_stack#Unwinding](https://en.wikipedia.org/wiki/Call_stack#Unwinding)
    - [https://scvgoe.github.io/2019-07-06-Exception-Safety/](https://scvgoe.github.io/2019-07-06-Exception-Safety/)
    - [https://www.boost.org/community/exception_safety.html](https://www.boost.org/community/exception_safety.html)

### so what is exception safety?

before I answer that I should first introduce to you an important concept which is stack unwinding

### stack unwinding :

> when a function is called, information about that routine gets stacked up on **the call stack inside a frame. Each function(subroutine) gets its own frame with whatever information instruction needs the CPU to execute that function.**
> 

> now when the function finishes its execution, its frame gets destroyed and the CPU executes the next function in a FILO order
> 

> When an exception occurs while a function is in progress on the stack, it returns to the call stack by finding the catch block, it just keeps returning through the execution path. resulting in the destruction of the function frame.
> 

> if there is any memory allocated before the exception throw, memory leaks will occur
> 

![exception.jpeg](docs%20e7f20768377544409ca8d036b1ab9b7f/exception.jpeg)

![Screen Shot 2022-10-26 at 9.17.17 AM.png](docs%20e7f20768377544409ca8d036b1ab9b7f/Screen_Shot_2022-10-26_at_9.17.17_AM.png)

```cpp
void f3() {
	int *c = new int[100]; // will be leak
	std::string s = "this is stack... would be destroyed";
	throw "exception!";
}

void f2() { f3() }

void f1() { try { f2() } catch (...) { std::cout << "back to here!\n"; } }
```

• `f1->f2->f3`Stacks are stacked in `f3->f2->f1`order, and stacks are released in order.

- the exception will follow that execution path until it finds the catch block,
    
     destroying function frames without giving a damn about allocated memory 
    
    ## ****Levels of exception safety :****
    
    now that we know what exception safety is let us discover the levels of exception safety
    
    and at what level our code should be exception safe
    
    Exception safety has four levels. (sort by safe order)
    
    1. **No-throw guarantee**
        
        (failure transparency): At a level that guarantees the success and safety of all operations, when an exceptional situation occurs, it is handled internally, and success and stability are guaranteed without being visible to clients.
        
    2. **Strong exception safety**
        
        (commit or rollback semantics): The operation may fail, but it is guaranteed that the failed operation does not cause other side effects. Therefore, all data retains its original values.
        
    3. **Basic exception safety**
        
        (no-leak guarantee): Although some actions of a failed operation can cause side effects, all invariants are always preserved and no resource leaks including memory leaks are guaranteed. The existing data stored may change its value, but it will still have a valid value.
        
    4. **No exception safety**
        
        : a level in which nothing is guaranteed. In general, a level of at least basic exception safety is required for a robust code. A high level of safety is difficult to achieve and may incur overhead due to additional copies. The key to exception safety is to ensure that program execution continues even after a block of code (even if it is an exception) is executed. Some languages make this simple by using the dispose pattern (with, try-with-resources).
        
    
    # **How to: Design for Exception Safety In C++**
    
    1. **Keep Resource Classes Simple**
        
        : When encapsulating a manual resource in a class, you should do nothing but manage the resource. Also, it is better to use a smart pointer if possible.
        
    2. **Use the RAII Idiom to Manage Resources**
        
        : RAII (Resource Acquisition Is Initialization) Idiom is a design pattern proposed by Bjarne Stroustrup, the creator of C++. The RAII pattern is an important technique to prevent leaks in languages such as C++ where the developer needs to directly manage the resource. It releases the resource automatically when the scope of use of the resource ends, and the resource is acquired even when an exception occurs. It must be ensured that this
        

## ****RAII (Resource Acquisition Is Initialization)****

- resources
    
    [https://www.stroustrup.com/3rd_safe.pdf](https://www.stroustrup.com/3rd_safe.pdf)
    
    [https://occamsrazr.net/tt/297](https://occamsrazr.net/tt/297)
    
    [https://en.cppreference.com/w/cpp/language/raii](https://en.cppreference.com/w/cpp/language/raii)
    

****Resource Acquisition is Initialization is a c++ technique that ensures that the allocated resources will be released**** 

it consists of creating an object that will encapsulate and manage the resource ****Acquisition/allocation**** in the constructor.  ********and release that resource in the destructor. 

<aside>
💡 when we talk about resources it can be allocated heap memory, a thread of execution, open socket, open file, locked mutex, …

</aside>

<aside>
💡 Another name for this technique is *Scope-Bound Resource Management*
 (SBRM),

</aside>

<aside>
💡 the standard library offers several RAII wrappers to manage user-provided resources:

- [std::unique_ptr](https://en.cppreference.com/w/cpp/memory/unique_ptr) and [std::shared_ptr](https://en.cppreference.com/w/cpp/memory/shared_ptr) to manage dynamically-allocated memory …
</aside>

## - Functors  (Function Objects):

- resources
    
    [MS functor vs lambda expression](https://docs.microsoft.com/en-us/cpp/cpp/lambda-expression-syntax?view=msvc-170)
    
    [what are c++ functors and their uses (StackOverflow 따봉 1000개)](https://stackoverflow.com/questions/356950/what-are-c-functors-and-their-uses)
    
    [about functor](https://www.bogotobogo.com/cplusplus/functors.php)
    
    [function object Wikipedia](https://en.wikipedia.org/wiki/Function_object)
    

- As the name shows, Functor is a combination of a function and an object.
- it's an object that behaves like a function. and that’s by overloading the () operator
- functors are widely used in STL algorithms

```cpp
struct Add{
	Add(int toAdd) : _toAdd(toAdd) {}
	int operator()(int x){
		return x + _toAdd;
	}
	private:
	int _toAdd;
};

int main(){
	Add add_42(42); // state
	Add add_13(13);
	int result_42 = add_42(2);
	int result_13 = add_13(2);
	std::vector<int> v(10, 10);
	std::transform(v.begin(), v.end(), v.begin(), add_42);
}
```

### **Classification of functors**

- generator: a functor with no arguments
- unary: a functor that takes one argument
- binary: a functor that takes two arguments
- predicate: Used as a functor that returns a boolean value, Unary predicate, Binary predicate, etc.
- operator: a functor that returns an operation value

### **functor vs function**

- A functor is an object that operates like a function by overloading the () operator on the object.
    - Because it is an object, it can be passed as an argument and can be used in the form of a callback.
- Because it is a callback type, it is compatible with STL's algorithm.
- the state can be stored
- To pass a function as an argument to a specific function, you need to do something else (function pointer or function object).

### **functor vs function pointer**

- A functor has a clearly defined type.
    - Therefore, it can also be used as a template argument.
    - Optimization is possible in the compilation stage, so it can be inlined.
    - It can store state and can also have regular member variables/functions.
    - A large amount of code is required to create a structure or class.
- A function pointer can contain other functions as long as the type is the same.
    - It is not determined at compile time, but the function is determined at runtime, so overhead occurs and cannot be inlined.
    - The state cannot be saved.

### **function vs lambda expression (c++11)**

Both can be inlined and lambda expression defaults to inline.

- A lambda expression is similar to a functor, but it is simpler because there is no need to define a class. Feels like syntax sugar

# 2- SFINAE

## - SFINAE (****Substitution Failure Is Not An Error****)

- resources
    
    [https://en.wikipedia.org/wiki/Substitution_failure_is_not_an_error#:~:text=Substitution failure is not an error (SFINAE) refers to a,to describe related programming techniques](https://en.wikipedia.org/wiki/Substitution_failure_is_not_an_error#:~:text=Substitution%20failure%20is%20not%20an%20error%20(SFINAE)%20refers%20to%20a,to%20describe%20related%20programming%20techniques).
    

before we define what SFINAE really is, let's first see how the compiler chooses the right function overload to call.  

in c++, the compiler goes through a process in order for it to find the right function overload.

these steps are:

- 1 [name lookup](https://en.cppreference.com/w/cpp/language/lookup)
    
    in this step, the compiler looks for candidate functions that have the same name
    
    this step consists of two different types of lookup :
    
    - • [unqualified name lookup](https://en.cppreference.com/w/cpp/language/unqualified_lookup): to put it simply, in this type of lookup, there’s a search for the namespace, if there’s one, otherwise we check in the global namespace;
    - • [qualified name lookup](https://en.cppreference.com/w/cpp/language/qualified_lookup): in this type of lookup, we search more specifically for the function name in the namespace that we found in the unqualified name lookup
- 2 • [ADL (Argument Dependent Lookup)](https://en.cppreference.com/w/cpp/language/adl) :
    - ADL is the set of rules for looking up the unqualified function names in [function-call expressions](https://en.cppreference.com/w/cpp/language/operator_other), including implicit function, calls to [overloaded operators](https://en.cppreference.com/w/cpp/language/operators).
        - the argument-dependent lookup is not considered if the lookup set produced by the usual [unqualified lookup](https://en.cppreference.com/w/cpp/language/lookup) contains any of the following:
            
            1) a declaration of a class member
            
            2) a declaration of a function at block scope (that's not a [using-declaration](https://en.cppreference.com/w/cpp/language/namespace#Using-declarations))
            
            3) any declaration that is not a function or a function template (e.g. a function object or another variable whose name conflicts with the name of the function that's being looked up)
            
        - for every argument in a function call expression, its type is examined to determine the *associated set of namespaces and classes* that it will add to the lookup.
            1. For arguments of fundamental type, the associated set of namespaces and classes is empty
            2. For arguments of class type (including union) … 
            3. For arguments whose type is a [class template](https://en.cppreference.com/w/cpp/language/class_template) specialization …
            4. For arguments of enumeration type … 
            5. For arguments of type pointer to T or pointer to an array of T …
            6. For arguments of function type, the function parameter types and the function return type are examined and their associated set of classes and namespaces are added to the set.
            7. For arguments of type pointer to member function F of class X …
            8. For arguments of type pointer to data member T of class X …
            9. ….
            
            <aside>
            💡 read more here : [https://en.cppreference.com/w/cpp/language/adl](https://en.cppreference.com/w/cpp/language/adl)
            
            </aside>
            
- 3  [template argument deduction](https://en.cppreference.com/w/cpp/language/template_argument_deduction)
    
     - at this point,  Template functions are untyped and need to be instantiated.
    
     - A template function is instantiated, either explicitly or implicitly, but not always all arguments of the template are determined.
    
     - At this point, if possible, the compiler deduces the template argument.
    
     - In this way, a candidate function set is created, and more than one function can be a candidate.
    

4 • [template argument substitution](https://en.cppreference.com/w/cpp/language/function_template#Template_argument_substitution)

- 7 - Substitute function arguments in the list, but if there is a problem with the type or expression, the substitution fails
- 8 - **When substitution fails, it does not generate a compile error and works by excluding the candidate function from the candidate group! (SFINAE)**
- 5 - [overload resolution](https://en.cppreference.com/w/cpp/language/overload_resolution)
    - Find the function actually called through overload resolution!

- At this time, the function candidates are `candidate functions` called, and the function actually called `viable function` is called!

<aside>
💡 SFINAE applies during overload resolution of function templates: When [substituting](https://en.cppreference.com/w/cpp/language/function_template#Template_argument_substitution)
 the explicitly specified or [deduced type](https://en.cppreference.com/w/cpp/language/template_argument_deduction) for the template parameter fails, the specialization is discarded from the [overload set](https://en.cppreference.com/w/cpp/language/overload_resolution), instead of causing a compile error.

</aside>

<aside>
💡 **Substitution failure is not an error** (**SFINAE**) refers to a situation in [C++](https://en.wikipedia.org/wiki/C%2B%2B) where an invalid substitution of [template](https://en.wikipedia.org/wiki/Template_(C%2B%2B)) parameters is not in itself an error. David Vandevoorde first introduced the acronym SFINAE to describe related programming techniques.[[1]](https://en.wikipedia.org/wiki/Substitution_failure_is_not_an_error#cite_note-1)

Specifically, when creating a candidate set for [overload resolution](https://en.wikipedia.org/wiki/Overload_resolution), some (or all) candidates of that set may be the result of instantiated templates with (potentially deduced) template arguments substituted for the corresponding template parameters. If an error occurs during the substitution of a set of arguments for any given template, the compiler removes the potential overload from the candidate set instead of stopping with a compilation error, provided the substitution error is one the C++ standard grants such treatment.[[2]](https://en.wikipedia.org/wiki/Substitution_failure_is_not_an_error#cite_note-2) If one or more candidates remain and overload resolution succeeds, the invocation is well-formed.

</aside>

> in the next section, we will see how we can use SFINAE to our advantage, through type traits, and tag dispatching ….
> 

# 3- Type Traits / Tag dispatching …

## Type Traits :

- resources
    
    [A quick primer on type traits in modern C++](https://www.internalpointers.com/post/quick-primer-type-traits-modern-cpp)
    
    [https://dev.to/sandordargo/what-are-type-traits-in-c-18j5](https://dev.to/sandordargo/what-are-type-traits-in-c-18j5)
    
    [https://cs.brown.edu/~jwicks/boost/libs/type_traits/cxx_type_traits.htm](https://cs.brown.edu/~jwicks/boost/libs/type_traits/cxx_type_traits.htm)
    

so what are type traits? 

let's start with what is a trait. 

> a *trait* is "a particular characteristic that can produce a particular type of behavior". Or simply "a characteristic, especially of a personality".
> 

> we can think about type traits as properties of a type .
> 

you'd often need the information on what kind of types are accepted by a template, and what types are supported by certain operations. While concepts are much superior in terms of expressiveness or usability, with type traits you could already introduce compile-time conditions on what should be accepted as valid code and what not.

Though *type traits* can help with even more. With their help, you can also add or remove the `const` specifier, you can turn a pointer or a reference into a value, and so on….

> **Type traits** are a clever technique used in C++ template metaprogramming that gives you the ability to inspect and transform the properties of *types*.
> 

> For example, given a generic type `T` — it could be `int`, `bool`, `std::vector`, or whatever you want — with type traits you can ask the compiler some questions: is it an integer? Is it a function? Is it a pointer? Or maybe a class? Does it have a destructor? Can you copy it? Will it throw exceptions? ... and so on. This is extremely useful in **conditional compilation**, where you instruct the compiler to pick the right path according to the type in input. We will see an example shortly.
> 

<aside>
💡 Generic programming (writing code that works with any data type meeting a set of requirements) has become the method of choice for providing reusable code. However, there are times in generic programming when "generic" just isn't good enough - sometimes the differences between types are too large for an efficient generic implementation. This is when the traits technique becomes important - by encapsulating those properties that need to be considered on a type-by-type basis inside a traits class, we can minimize the amount of code that has to differ from one type to another and maximize the amount of generic code.

</aside>

## Tag Dispatching :

## - is_integral :

## - enable_if :
