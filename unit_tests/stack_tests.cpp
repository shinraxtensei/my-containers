
#include "tests.hpp"

int stack_unit_tests()
{
std::cout << "============================ STACK UNIT TESTS =======================" << std::endl;

std::cout << YELLOW << "============================ 1 - CONSTRUCTORS =======================" << RESET << std::endl ;

std::cout << "===== Default constructor =====" << std::endl << std::endl;
	ft::stack<int> ft_stack;
	std::stack<int> std_stack;

	// push back some numbers
	for (int i = 0; i < 10 ; i++)
	{
		ft_stack.push(i);
		std_stack.push(i);
	}

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;

std::cout << "===== copy constructor =====" << std::endl << std::endl;

	ft::stack<int> ft_stack2(ft_stack);
	std::stack<int> std_stack2(std_stack);

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== assignment operator =====" << std::endl << std::endl;

	ft::stack<int> ft_stack3;
	std::stack<int> std_stack3;

	ft_stack3 = ft_stack;
	std_stack3 = std_stack;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;

sleep(1);	
std::cout << YELLOW << "============================2 - MEMBER FUNCTIONS =======================" << RESET  << std::endl;

std::cout << "===== empty =====" << std::endl << std::endl;

	(ft_stack.empty()) ? std::cout << "ft_stack is empty" << std::endl : std::cout << "ft_stack is not empty" << std::endl;
	(std_stack.empty()) ? std::cout << "std_stack is empty" << std::endl : std::cout << "std_stack is not empty" << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;

std::cout << "===== size =====" << std::endl << std::endl;

	std::cout << "ft_stack size is " << ft_stack.size() << std::endl;
	std::cout << "std_stack size is " << std_stack.size() << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;

std::cout << "===== top =====" << std::endl << std::endl;

	std::cout << "ft_stack top is " << ft_stack.top() << std::endl;
	std::cout << "std_stack top is " << std_stack.top() << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;

std::cout << "===== push =====" << std::endl << std::endl;

	ft_stack.push(69);
	std_stack.push(69);

	std::cout << "ft_stack top is " << ft_stack.top() << std::endl;
	std::cout << "std_stack top is " << std_stack.top() << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;

std::cout << "===== pop =====" << std::endl << std::endl;

	ft_stack.pop();
	std_stack.pop();

	std::cout << "ft_stack top is " << ft_stack.top() << std::endl;
	std::cout << "std_stack top is " << std_stack.top() << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;

std::cout << YELLOW << "============================ 3 - RELATIONAL OPERATORS =======================" << RESET << std::endl;

std::cout << "mystack == mystack2  :" << ((ft_stack == ft_stack2) ? "true" : "false") << std::endl;
std::cout << "mystack != mystack2  :" << ((ft_stack != ft_stack2) ? "true" : "false") << std::endl;
std::cout << "mystack < mystack2  :" << ((ft_stack < ft_stack2) ? "true" : "false") << std::endl;
std::cout << "mystack <= mystack2  :" << ((ft_stack <= ft_stack2) ? "true" : "false") << std::endl;
std::cout << "mystack > mystack2  :" << ((ft_stack > ft_stack2) ? "true" : "false") << std::endl;
std::cout << "mystack >= mystack2  :" << ((ft_stack >= ft_stack2) ? "true" : "false") << std::endl;



return (0);

}