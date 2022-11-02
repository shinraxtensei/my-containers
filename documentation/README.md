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

![exception.jpeg](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/b1835ebc-0218-45b9-acf1-9d6ff32525e3/exception.jpeg)

![Screen Shot 2022-10-26 at 9.17.17 AM.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/912c0f3f-bfba-4c2b-bc97-e6b740b788cf/Screen_Shot_2022-10-26_at_9.17.17_AM.png)

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
💡 when we talk about resources it can be allocated heap memory, a thread of execution, an open socket, an open file, locked mutex, …

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

sometimes in metaprogramming, we want our template function to behave differently depending on the types given as parameters

we can achieve that in different means :

- there’s [**Conditional compilation](https://en.wikipedia.org/wiki/Conditional_compilation), which** **helps to compile a specific portion of the program or lets us skip the compilation of some specific part of the program based on some conditions**
- using type-traits (is_integral …)
- more simply, we can make a function that takes an option number(flag) , and depending on that number executes a different code.
- or we can use Tag Dispatching:

> Tag-dispatching is a metaprogramming technique to overload a function using different tag parameters. The right overload is chosen by a compiler at compile time
> 

- it works like this:

by creating several tags (so several types), we can use them to route the execution through various overloads of a function.

```cpp

template<class It>
It plus2_impl(It it, std::forward_iterator_tag) 
{
    ++it; ++it;
    return it;
}

template<class It>
It plus2_impl(It it, std::random_access_iterator_tag) 
{
    return it + 2;
}

template<class It>
It plus2(It it) 
{
    using Tag = typename std::iterator_traits<It>::iterator_category;
    return plus2_impl(it, Tag{});
}
```

## - [is_integral](https://cplusplus.com/reference/type_traits/is_integral/) :

 `template <class T> struct is_integral;`

![Screen Shot 2022-10-31 at 5.10.31 PM.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/0c38afea-8b28-4ad7-8b40-c1e8acba8807/Screen_Shot_2022-10-31_at_5.10.31_PM.png)

is_integral is a Trait class that identifies whether *T* is an integral type.

it inherits from the class integral_constant either TRUE or FALSE depending on the type is it an integral type or not 

> here are the integral types :
> 

```cpp
bool , char ,char16_t , char32_t  , wchar_t , signed char,short int, int
long int,long long int , unsigned char , unsigned short int , unsigned int
unsigned long int, unsigned long long int
```

## [- enable_if :](https://cplusplus.com/reference/type_traits/enable_if/)

- resources
    
    [https://leimao.github.io/blog/CPP-Enable-If/](https://leimao.github.io/blog/CPP-Enable-If/)
    
    [https://h-deb.clg.qc.ca/Sujets/TrucsScouts/Comprendre_enable_if.html](https://h-deb.clg.qc.ca/Sujets/TrucsScouts/Comprendre_enable_if.html)
    

The enable_if [trait](https://h-deb.clg.qc.ca/Sujets/Divers--cplusplus/Traits.html) is a technique to control the application of [SFINAE](https://h-deb.clg.qc.ca/Sujets/Divers--cplusplus/SFINAE.html).

In C++ metaprogramming, `std::enable_if` is an important function to enable certain types for template specialization via some predicates known at the compile time. Using types that are not enabled by `std::enable_if` for template specialization will result in a compile-time error.

<aside>
💡 This metafunction is a convenient way to leverage [SFINAE](https://en.cppreference.com/w/cpp/language/sfinae) prior to C++20's [concepts](https://en.cppreference.com/w/cpp/language/constraints), in particular for conditionally removing functions from the [candidate set](https://en.cppreference.com/w/cpp/language/overload_resolution) based on type traits, allowing separate function overloads or specializations based on those different type traits.

**std::enable_if** can be used in many forms, including:

- as an additional function argument (not applicable to operator overloads)
- as a return type (not applicable to constructors and destructors)
- as a class template or function template parameter
</aside>

implementation of enable_if :

```cpp
template<bool B, class T = void>
struct enable_if {};
 
template<class T>
struct enable_if<true, T> { typedef T type; };
```

 

## - **[lexicographical_compare](https://cplusplus.com/reference/algorithm/lexicographical_compare/) :**

> *lexicographical comparison* is the kind of comparison generally used to sort words alphabetically in dictionaries; It involves comparing sequentially the elements that have the same position in both ranges against each other until one element is not equivalent to the other. The result of comparing these first non-matching elements is the result of the lexicographical comparison.
> 
- The behavior of this function template is equivalent to:

```cpp

template <class InputIterator1, class InputIterator2>
  bool lexicographical_compare (InputIterator1 first1, InputIterator1 last1,
                                InputIterator2 first2, InputIterator2 last2)
{
  while (first1!=last1)
  {
    if (first2==last2 || *first2<*first1) return false;
    else if (*first1<*first2) return true;
    ++first1; ++first2;
  }
  return (first2!=last2);
}
```

## - [std::pair **](https://cplusplus.com/reference/utility/pair/?kw=pair):**

the pair is pretty strait forward This class couples together a pair of values, which may be of different types (T1 and T2). The individual values can be accessed through its public members first
 and second.

- the make_pair is just a function that returns a pair.

# 3-  Iterators :

- so what are iterators, and how can we implement them?

> An **iterator** 
is an object (like a pointer) that points to an element inside the container. We can use iterators to move through the contents of the container. They can be visualized as something similar to a pointer pointing to some location and we can access the content at that particular location using them. Iterators play a critical role in connecting algorithms with containers along with the manipulation of data stored inside the containers.
> 

> in c++ there are 5 categories of iterators, each with its own properties that we should know in order to work with them efficiently
> 
> 
> ![iterator_traits.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/53627a2a-be6d-4e09-adc5-b43e5422039c/iterator_traits.png)
> 

<aside>
💡 we can think of an iterator as some generic pointer that will work with any container no matter what it is.  now, how can we make a generic pointer?

</aside>

## - Iterator Traits :

- resources
    
    [https://cplusplus.com/reference/iterator/iterator_traits/](https://cplusplus.com/reference/iterator/iterator_traits/)
    
    [https://www.fluentcpp.com/2018/05/08/std-iterator-deprecated/](https://www.fluentcpp.com/2018/05/08/std-iterator-deprecated/)
    
    [https://www.codeproject.com/Articles/36530/An-Introduction-to-Iterator-Traits](https://www.codeproject.com/Articles/36530/An-Introduction-to-Iterator-Traits)
    
    [https://stackoverflow.com/questions/6742008/what-are-the-typical-use-cases-of-an-iterator-trait](https://stackoverflow.com/questions/6742008/what-are-the-typical-use-cases-of-an-iterator-trait)
    

> Generic code that uses iterators, such as the STL algorithms which use them intensely, needs information about them. For example, it needs the type of object that the iterators refer to.
> 

> so how does it gets this information?
> 

> Another example of the required information is the capabilities of the iterator: is it just an input iterator, that supports `++`  but should not be read twice? Or a forward iterator that can be read several times? Or a bidirectional that can also do `--`? Or a random access iterator, that can jump around with `+=`, `+`, `-=`, and `-`? Or an output iterator?
> 

> This piece of information is useful for some algorithms that would be more or less efficient depending on those capabilities. Such an algorithm typically has several implementations and chooses one to route to depending on the category of the iterator.
> 

[Iterator Traits](https://en.cppreference.com/w/cpp/iterator/iterator_traits) is a class trait that provides specific information about the iterator that stl::algorithms needs 

| member | description |
| --- | --- |
| difference_type | Type to express the result of subtracting one iterator from another. it gets stored in type able to represent the result of any valid pointer subtraction operation(ptrdiff_t) |
| value_type | The type of element the iterator can point to. |
| pointer | The type of a pointer to an element the iterator can point to. |
| reference | The type of reference to an element the iterator can point to. |
| iterator_category | The iterator category. It can be one of these:
• input_iterator_tag
• output_iterator_tag
• forward_iterator_tag
• bidirectional_iterator_tag
• random_access_iterator_tag |

> The iterator_traits class template comes with a default definition that obtains these types from the iterator type itself ([iterator class](https://cplusplus.com/reference/iterator/iterator/)). It is also specialized for pointers (T*) and pointers to const (const T*).Note that any custom class will have a valid instantiation of iterator_traits if it publicly inherits the base class [std::iterator](https://cplusplus.com/iterator).
> 

# Member types

| member | generic definition | T* specialization | const T* specialization |
| --- | --- | --- | --- |
| difference_type | Iterator::difference_type | ptrdiff_t | ptrdiff_t |
| value_type | Iterator::value_type | T | T |
| pointer | Iterator::pointer | T* | const T* |
| reference | Iterator::reference | T& | const T& |
| iterator_category | Iterator::iterator_category | random_access_iterator_tag | random_access_iterator_tag |

## - the Iterator Class :

- resources
    
    [https://cplusplus.com/reference/cstddef/ptrdiff_t/](https://cplusplus.com/reference/cstddef/ptrdiff_t/)
    
    [https://cplusplus.com/reference/iterator/iterator/](https://cplusplus.com/reference/iterator/iterator/)
    
    [https://cplusplus.com/reference/iterator/](https://cplusplus.com/reference/iterator/)
    

`std::iterator` is a helper to define the iterator traits of an iterator.

`std::iterator` is a template, that takes 5 template parameters:

```cpp
template<
    typename Category,
    typename T,
    typename Distance = std::ptrdiff_t,
    typename Pointer = T*,
    typename Reference = T&
> struct iterator;
```

Those 5 names sound familiar, right? Those template types correspond to the 5 types required by the STL on iterators.

The job of `std::iterator` is to expose those types. Here is one possible implementation of `std::iterator`:

```cpp
template<
    typename Category,
    typename T,
    typename Distance = std::ptrdiff_t,
    typename Pointer = T*,
    typename Reference = T&
> struct iterator
{
    using iterator_category = Category;
    using value_type = T;
    using difference_type = Distance;
    using pointer = Pointer;
    using reference = Reference;
};
```

`std::iterator` allows an iterator to define these 5 types, by **inheriting from `std::iterator`** and passing it those types (at least the first 2 since the other 3 have default values):

```cpp
class MyIterator : public std::iterator<std::random_access_iterator, int>
{
    // ...
};
```

By inheriting from `std::iterator`,  `MyIterator` also exposes the 5 types.

# 4 - Allocator :

- resources
    
    [https://en.wikipedia.org/wiki/Allocator_(C%2B%2B)](https://en.wikipedia.org/wiki/Allocator_(C%2B%2B))
    
    [https://medium.com/@terselich/1-a-guide-to-implement-a-simple-c-stl-allocator-705ede6b60e4](https://medium.com/@terselich/1-a-guide-to-implement-a-simple-c-stl-allocator-705ede6b60e4)
    
    [https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/concept/Allocator.html](https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/concept/Allocator.html)
    
    [https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/allocator_traits.html](https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/allocator_traits.html)
    
    [https://hackingcpp.com/cpp/design/allocators.html](https://hackingcpp.com/cpp/design/allocators.html)
    
    [https://stackoverflow.com/questions/5628059/c-stl-allocator-vs-operator-new](https://stackoverflow.com/questions/5628059/c-stl-allocator-vs-operator-new)
    
    [https://stackoverflow.com/questions/4254811/memory-management-stdallocator](https://stackoverflow.com/questions/4254811/memory-management-stdallocator)
    
    [https://stackoverflow.com/questions/4254811/memory-management-stdallocator](https://stackoverflow.com/questions/4254811/memory-management-stdallocator)
    
    [https://stackoverflow.com/questions/31358804/whats-the-advantage-of-using-stdallocator-instead-of-new-in-c](https://stackoverflow.com/questions/31358804/whats-the-advantage-of-using-stdallocator-instead-of-new-in-c)
    

> an Allocator is an object that’s responsible for encapsulating memory management
> 
> 
> every stl container except (`std::array`, to `std::shared_ptr` and `std::function`)
> 
> has an allocator that Encapsulates memory allocation and deallocation strategy.
> 

- you might ask yourself a question, what about the new and delete ? what’s wrong with them ?

<aside>
💡 if you are coming from a c language background you may ask why not malloc or alloc instead of new and delete? , so let’s first answer this

> malloc() is a library function of stdlib.h and it was used in C language to allocate memory for N blocks at run time, it can also be used in C++ programming language. Whenever a program needs memory to declare at run time we can use this function.
> 

> while new is an operator in C++ programming language, it is also used to declare memory for N blocks at run time.
> 

> here are some differences between malloc and new :
> 
> 1. new allocates memory and calls the constructor for object initialization. But malloc() allocates memory and does not call the constructor.
> 2. new is an operator whereas malloc() is a library function.
> 3. The return type of new is the exact data type while malloc() returns void*.
> 4. new is faster than malloc() because an operator is always faster than a function.
</aside>

now time to answer why using an allocator and not new and delete :

the std::allocator was not created to replace new and delete.

 in fact,  the allocator uses new and delete in its internals.

what’s so special about the allocator is that it separates the allocation and construction, deallocation and destruction.

for general programming using new and delete is more than enough, but when creating a container it's a must to take control of these things. 

here is an example :

<aside>
💡 Consider the following code:

```cpp
std::vector<X> v;
v.reserve(4);        // (1)
v.push_back( X{} );  // (2)
v.push_back( X{} );  // (3)
v.clear();           // (4)

```

<aside>
💡 Here line (1) must allocate enough memory for four objects, but not construct them yet. Then lines (2) and (3) must construct objects into the allocated memory. Then line (4) must destroy those objects, but not deallocate the memory. Finally, in the vector's destructor, all the memory can be deallocated.

</aside>

</aside>

---

- let’s deep dive into the std::allocator and how it works :
    
    

## - **allocator_traits :**

just like the iterator, the std::allocator needs to have some information about the container in order for it to work properly.

> The `allocator_traits`
 the class template provides a standardized way to access various properties of allocators. The standard containers and other standard library components access allocators through this template, which makes it possible to use any class type as an allocator, as long as the user-provided specialization of `allocator_traits`
 implements all required functionality.
> 

The default, non-specialized, `allocator_traits`
 contains the following members:

### **Member types**

| Type | Definition |
| --- | --- |
| allocator_type | Alloc |
| value_type | Alloc::value_type |
| pointer | Alloc::pointer if present, otherwise value_type* |
| const_pointer | Alloc::const_pointer if present, otherwise std::pointer_traits<pointer>::rebind<const value_type> |
| void_pointer | Alloc::void_pointer if present, otherwise std::pointer_traits<pointer>::rebind<void> |
| const_void_pointer | Alloc::const_void_pointer if present, otherwise std::pointer_traits<pointer>::rebind<const void> |
| difference_type | Alloc::difference_type if present, otherwise std::pointer_traits<pointer>::difference_type |
| size_type | Alloc::size_type if present, otherwise std::make_unsigned<difference_type>::type |
| propagate_on_container_copy_assignment | Alloc::propagate_on_container_copy_assignment if present, otherwise std::false_type |
| propagate_on_container_move_assignment | Alloc::propagate_on_container_move_assignment if present, otherwise std::false_type |
| propagate_on_container_swap | Alloc::propagate_on_container_swap if present, otherwise std::false_type |
| is_always_equal(since C++17) | Alloc::is_always_equal if present, otherwise std::is_empty<Alloc> |

> the template [std::allocator_traits](https://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/memory/allocator_traits.html)
 supplies the default implementations for all optional requirements, and all standard library containers and other allocator-aware classes access the allocator through `std::allocator_traits`
, not directly.
> 

### **Member functions**

| allocate [static] | allocates uninitialized storage using the allocator(public static member function) |
| --- | --- |
| deallocate [static] | deallocates storage using the allocator(public static member function) |
| construct [static] | constructs an object in the allocated storage(function template) |
| destroy [static] | destructs an object stored in the allocated storage(function template) |
| max_size [static] | returns the maximum object size supported by the allocator(public static member function) |
| select_on_container_copy_construction [static] | obtains the allocator to use after copying a standard container(public static member function) |

---

<aside>
💡 note: implementing the std::distance is recommended even if it's not necessary in the subject but it prevents making your life a hell

</aside>

> with this in mind, I think we have enough knowledge to try and deep dive into the
> 
> 
> re-implementation of the containers.
> 

# [FT_VECTOR](https://en.cppreference.com/w/cpp/container/vector) :

- resources
    
    [https://medium.com/@vgasparyan1995/how-to-write-an-stl-compatible-container-fc5b994462c6#:~:text=For insertion,time (O(1)](https://medium.com/@vgasparyan1995/how-to-write-an-stl-compatible-container-fc5b994462c6#:~:text=For%20insertion%20it,time%20(O(1))
    
    [https://stackoverflow.com/questions/6296945/size-vs-capacity-of-a-vector#:~:text=Size is not, what they want](https://stackoverflow.com/questions/6296945/size-vs-capacity-of-a-vector#:~:text=Size%20is%20not,what%20they%20want)
    
    [https://www.geeksforgeeks.org/how-to-implement-our-own-vector-class-in-c/](https://www.geeksforgeeks.org/how-to-implement-our-own-vector-class-in-c/)
    
- prototype : `template < class T, class Alloc = allocator<T> > class vector;`

> The **iterators** of `vector` are of the “**random access**” category:
> 
> 
> → Random-access iterators are iterators that can be used to access elements at an arbitrary offset position relative to the element they point to, offering the same functionality as pointers.
> 
> → Random-access iterators are the most complete iterators in terms of functionality. All *pointer types* are also valid *random-access iterators.*
> 

### **Member types**

| Member type | Definition |
| --- | --- |
| value_type | T |
| allocator_type | Allocator |
| size_type | Unsigned integer type (usually std::size_t) |
| difference_type | Signed integer type (usually std::ptrdiff_t) |
| reference | value_type& |
| const_reference | const value_type& |
| pointer | Allocator::pointer(until C++11)std::allocator_traits<Allocator>::pointer(since C++11) |
| const_pointer | Allocator::const_pointer(until C++11)std::allocator_traits<Allocator>::const_pointer(since C++11) |
| iterator | LegacyRandomAccessIterator and LegacyContiguousIterator to value_type(until C++20)LegacyRandomAccessIterator, contiguous_iterator, and ConstexprIterator to value_type(since C++20) |
| const_iterator | LegacyRandomAccessIterator and LegacyContiguousIterator to const value_type(until C++20)LegacyRandomAccessIterator, contiguous_iterator, and ConstexprIterator to const value_type(since C++20) |
| reverse_iterator | std::reverse_iterator<iterator> |
| const_reverse_iterator | std::reverse_iterator<const_iterator> |

### **Member functions**

| (constructor) | constructs the vector(public member function) |
| --- | --- |
| (destructor) | destructs the vector(public member function) |
| operator= | assigns values to the container(public member function) |
| assign | assigns values to the container(public member function) |
| get_allocator | returns the associated allocator(public member function) |
| Element access |  |
| at | access specified element with bounds checking(public member function) |
| operator[] | access specified element(public member function) |
| front | access the first element(public member function) |
| back | access the last element(public member function) |
| data | direct access to the underlying array(public member function) |
| Iterators |  |
| begin cbegin(C++11) | returns an iterator to the beginning(public member function) |
| endcend(C++11) | returns an iterator to the end(public member function) |
| begin crbegin(C++11) | returns a reverse iterator to the beginning(public member function) |
| rend crend(C++11) | returns a reverse iterator to the end(public member function) |
| Capacity |  |
| empty | checks whether the container is empty(public member function) |
| size | returns the number of elements(public member function) |
| max_size | returns the maximum possible number of elements(public member function) |
| reserve | reserves storage(public member function) |
| capacity | returns the number of elements that can be held in currently allocated storage(public member function) |
| Modifiers |  |
| clear | clears the contents(public member function) |
| insert | inserts elements(public member function) |
| erase | erases elements(public member function) |
| push_back | adds an element to the end(public member function) |
| pop_back | removes the last element(public member function) |
| resize | changes the number of elements stored(public member function) |
| swap | swaps the contents(public member function) |

### **Non-member functions**

| operator==operator!=operator<operator<=operator>operator>=operator<=> | lexicographically compares the values in the vector(function template) |
| --- | --- |
| std::swap(std::vector) | specializes the std::swap algorithm(function template) |

# [FT_STACK](https://en.cppreference.com/w/cpp/container/stack) :

- resources
    
    [https://en.cppreference.com/w/cpp/container/stack](https://en.cppreference.com/w/cpp/container/stack)
    
    [https://stackoverflow.com/questions/3873802/what-are-containers-adapters-c#:~:text=values in it.-,Container Adapters,-Container adapters%2C on](https://stackoverflow.com/questions/3873802/what-are-containers-adapters-c#:~:text=values%20in%20it.-,Container%20Adapters,-Container%20adapters%2C%20on)
    

> The std::stack class is a container adapter. Container objects hold data of a similar data type. You can create a stack from various sequence containers. If no container is provided, the deque contains will be used by default. Container adapters don’t support iterators, so they can’t be used to manipulate data.
> 

> the std::stack is built on top of the std::vector as an underlying container
> 
> 
> so most of its member functions are just a call to the underlying container’s member functions
> 

### **Member types**

| Member type | Definition |
| --- | --- |
| container_type | Container |
| value_type | Container::value_type |
| size_type | Container::size_type |
| reference | Container::reference |
| const_reference | Container::const_reference |

### **Member functions**

| (constructor) | constructs the stack(public member function) |
| --- | --- |
| (destructor) | destructs the stack(public member function) |
| operator= | assigns values to the container adaptor(public member function) |
| Element access |  |
| top | accesses the top element(public member function) |
| Capacity |  |
| empty | checks whether the underlying container is empty(public member function) |
| size | returns the number of elements(public member function) |
| Modifiers |  |
| push | inserts element at the top(public member function) |
| pop | removes the top element(public member function) |
| swap(C++11) | swaps the contents(public member function) |

****Member objects****

| Container c | the underlying container(protected member object) |
| --- | --- |

### **Non-member functions**

| operator==operator!=operator<operator<=operator>operator>=operator<=> | lexicographically compares the values in the stack(function template) |
| --- | --- |
| std::swap(std::stack) | specializes the std::swap algorithm(function template) |

# RED-BLACK-TREE

![0_ilyr9n3l4OGhjdk9.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/f2e6f70c-e242-4677-8ecd-3788789dfd13/0_ilyr9n3l4OGhjdk9.png)

<aside>
💡 I highly recommend learning about binary search trees unless you wanna get overwhelmed 
here’s a resource where to learn it :
 [https://www.softwaretestinghelp.com/binary-search-tree-in-cpp/#:~:text=A Binary Search Tree or, right children of the BST](https://www.softwaretestinghelp.com/binary-search-tree-in-cpp/#:~:text=A%20Binary%20Search%20Tree%20or,right%20children%20of%20the%20BST). 
u can refer to any other resource u find, it’s really simple, good luck

</aside>

****Problems with Binary Search Tree :**** 

For Binary Search Tree, although the average time complexity for the search, insertion, and deletion are all O(log n), where **n** is the number of nodes in the tree, the time complexity becomes O(n) in the worst case - BST is not balanced.

![bst.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/676e43f1-afd4-47d1-b1d4-a840245e9696/bst.png)

We can guarantee O(log⁡n) time for all three operations by using a balanced tree - a tree that always has height `log(n)`.

so, what is a red-black tree? 

> A red-black tree is a self-balancing binary search tree, that is, a binary search tree that automatically maintains some balance.
> 

> Red-black trees are an evolution of binary search trees that aim to keep the tree balanced without affecting the complexity of the primitive operations. This is done by coloring each node in the tree with either red or black and preserving a set of properties that guarantee that the deepest path in the tree is not longer than twice the shortest one.
> 

to achieve that balance there are rules that should be respected :

- `Color property`: Each node has a color (red or black) associated with it (in addition to its key, left and right children).
- `Root property`: The root of the red-black tree is black.
- `Red property`: The children of a red node are black.
- `Black property`: For each node with at least one null child, the number of black nodes on the path from the root to the null child is the same.
