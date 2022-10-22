
#include "tests.hpp"

int set_unit_tests()
{

double ft_start , ft_end , std_start , std_end ;

std::cout << "============================ THE TEST BEGINS  =======================" << std::endl;

std::cout << YELLOW << "============================ 1 - CONSTRUCTORS =======================" << RESET << std::endl ;

std::cout << "===== Default constructor =====" << std::endl << std::endl;

FT_START;
ft::set<int> ft_set;
for(int i = 0; i < 10; i++) {ft_set.insert(i);}
FT_END;

STD_START;
std::set<int> std_set;
for(int i = 0; i < 10; i++) {std_set.insert(i);}
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

std::cout << "===== Range constructor =====" << std::endl << std::endl;

FT_START;
ft::set<int> ft_set2(ft_set.begin(), ft_set.end());
FT_END;

STD_START;
std::set<int> std_set2(std_set.begin(), std_set.end());
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

std::cout << "===== Copy constructor =====" << std::endl << std::endl;

FT_START;
ft::set<int> ft_set3(ft_set2);
FT_END;

STD_START;
std::set<int> std_set3(std_set2);
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;


std::cout << "===== Assignement operator =====" << std::endl << std::endl;

FT_START;
ft_set3 = ft_set;
FT_END;

STD_START;
std_set3 = std_set;
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;


sleep(1);
std::cout << YELLOW << "============================ 2 - ITERATORS =======================" << RESET << std::endl ;

std::cout << "===== begin =====" << std::endl << std::endl;

FT_START;
ft::set<int>::iterator ft_it = ft_set.begin();
std::cout << "the first element is : " << *ft_it << std::endl;
FT_END;

STD_START;
std::set<int>::iterator std_it = std_set.begin();
std::cout << "the first element is : " << *std_it << std::endl;
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

std::cout << "===== end =====" << std::endl << std::endl;

FT_START;
ft::set<int>::iterator ft_it2 = ft_set.end();
--ft_it2;
std::cout << "the last element is : " << *ft_it2 << std::endl;
FT_END;

STD_START;
std::set<int>::iterator std_it2 = std_set.end();
--std_it2;
std::cout << "the last element is : " << *std_it2 << std::endl;
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;


std::cout << "===== rbegin =====" << std::endl << std::endl;

FT_START;
ft::set<int>::reverse_iterator ft_rit = ft_set.rbegin();
std::cout << "the first element is : " << *ft_rit << std::endl;
FT_END;

STD_START;
std::set<int>::reverse_iterator std_rit = std_set.rbegin();
std::cout << "the first element is : " << *std_rit << std::endl;
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

std::cout << "===== rend =====" << std::endl << std::endl;

FT_START;
ft::set<int>::reverse_iterator ft_rit2 = ft_set.rend();
--ft_rit2;
std::cout << "the last element is : " << *ft_rit2 << std::endl;
FT_END;

STD_START;
std::set<int>::reverse_iterator std_rit2 = std_set.rend();
--std_rit2;
std::cout << "the last element is : " << *std_rit2 << std::endl;
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

sleep(1);
std::cout << YELLOW << "\n============================ 3 - CAPACITY/SIZE AND RELATED STUFF =======================" << RESET << std::endl ;


std::cout << "===== empty =====" << std::endl << std::endl;

FT_START;
std::cout << "ft_set is empty : " << ft_set.empty() << std::endl;
FT_END;

STD_START;
std::cout << "std_set is empty : " << std_set.empty() << std::endl;
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

std::cout << "===== size =====" << std::endl << std::endl;

FT_START;
std::cout << "ft_set size : " << ft_set.size() << std::endl;
FT_END;

STD_START;
std::cout << "std_set size : " << std_set.size() << std::endl;
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;


std::cout << "===== max_size =====" << std::endl << std::endl;

FT_START;
std::cout << "ft_set max_size : " << ft_set.max_size() << std::endl;
FT_END;

STD_START;
std::cout << "std_set max_size : " << std_set.max_size() << std::endl;
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

sleep(1);
std::cout << YELLOW << "\n============================ 4 - MODIFIERS =======================" << RESET << std::endl ;

std::cout << "===== insert a value =====" << std::endl << std::endl;

FT_START;

std::cout << "ft_set before insert :\n";
std::cout << "size : " << ft_set.size() << std::endl;
CONTENT(ft_set);
ft_set.insert(42);
std::cout << "ft_set after insert :\n";
std::cout << "size : " << ft_set.size() << std::endl;
CONTENT(ft_set);

FT_END;

STD_START;

std::cout << "std_set before insert :\n";
std::cout << "size : " << std_set.size() << std::endl;
CONTENT(std_set);
std_set.insert(42);
std::cout << "std_set after insert :\n";
std::cout << "size : " << std_set.size() << std::endl;
CONTENT(std_set);
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;


std::cout << "===== insert into a pos =====" << std::endl << std::endl;

FT_START;
std::cout << "ft_set before insert :\n"
<< "size : " << ft_set.size() << std::endl;
CONTENT(ft_set);
ft_set.insert(ft_set.begin(), -5);
std::cout << "ft_set after insert :\n";
std::cout << "size : " << ft_set.size() << std::endl;
CONTENT(ft_set);
FT_END;

STD_START;
std::cout << "std_set before insert :\n"
<< "size : " << std_set.size() << std::endl;
CONTENT(std_set);
std_set.insert(std_set.begin(), -5);
std::cout << "std_set after insert :\n";
std::cout << "size : " << std_set.size() << std::endl;
CONTENT(std_set);
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

std::cout << "===== insert a range =====" << std::endl << std::endl;

ft_set2.clear();
std_set2.clear();
FT_START;
std::cout << "ft_set2 before insert :\n";
std::cout << "size : " << ft_set2.size() << std::endl;
CONTENT(ft_set2);
ft_set2.insert(ft_set.begin(), ft_set.end());
std::cout << "ft_set2 after insert :\n";
std::cout << "size : " << ft_set2.size() << std::endl;
CONTENT(ft_set2);
FT_END;

STD_START;
std::cout << "std_set2 before insert :\n"
<< "size : " << std_set2.size() << std::endl;
CONTENT(std_set2);

std_set2.insert(std_set.begin(), std_set.end());

std::cout << "std_set2 after insert :\n";
std::cout << "size : " << std_set2.size() << std::endl;
CONTENT(std_set2);
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;







std::cout  << "===== erase a pos =====" <<RESET << std::endl << std::endl;

FT_START;
std::cout << "ft_set before erase :\n"
<< "size : " << ft_set.size() << std::endl;
CONTENT(ft_set);
ft_set.erase(ft_set.begin());
std::cout << "42 erased from FT \n";
std::cout << "ft_set after erase :\n";
std::cout << "size : " << ft_set.size() << std::endl;
CONTENT(ft_set);
FT_END;

STD_START;
std::cout << "std_set before erase :\n"
<< "size : " << std_set.size() << std::endl;
CONTENT(std_set);
std_set.erase(std_set.begin());
std::cout << "42 erased from STD \n";
std::cout << "std_set after erase :\n";
std::cout << "size : " << std_set.size() << std::endl;
CONTENT(std_set);
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

std::cout << "===== erase by key =====" << std::endl << std::endl;

FT_START;
std::cout << "ft_set before erase :\n"
<< "size : " << ft_set.size() << std::endl;
CONTENT(ft_set);
ft_set.erase(42);
std::cout << "42 erased from FT \n";
std::cout << "ft_set after erase :\n";
std::cout << "size : " << ft_set.size() << std::endl;
CONTENT(ft_set);
FT_END;

STD_START;
std::cout << "std_set before erase :\n"
<< "size : " << std_set.size() << std::endl;
CONTENT(std_set);
std_set.erase(42);
std::cout << "42 erased from STD \n";
std::cout << "std_set after erase :\n";
std::cout << "size : " << std_set.size() << std::endl;
CONTENT(std_set);

STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

std::cout << "===== erase a range =====" << std::endl << std::endl;

FT_START;
std::cout << "ft_set before erase :\n"
<< "size : " << ft_set.size() << std::endl;
CONTENT(ft_set);
ft_set.erase(ft_set.begin(), ft_set.end());
std::cout << "ft_set after erase :\n";
std::cout << "size : " << ft_set.size() << std::endl;
CONTENT(ft_set);
FT_END;

STD_START;
std::cout << "std_set before erase :\n"
<< "size : " << std_set.size() << std::endl;
CONTENT(std_set);
std_set.erase(std_set.begin(), std_set.end());
std::cout << "std_set after erase :\n";
std::cout << "size : " << std_set.size() << std::endl;
CONTENT(std_set);

STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

std::cout << "===== swap =====" << std::endl << std::endl;

FT_START;
std::cout << "FT swapped with FT \n";
ft_set.swap(ft_set);
FT_END;

STD_START;
std::cout << "STD swapped with STD \n";
std_set.swap(std_set);
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;


std::cout << "===== clear =====" << std::endl << std::endl;

FT_START;
std::cout << "FT cleared \n";
ft_set.clear();
FT_END;

STD_START;
std::cout << "STD cleared \n";
std_set.clear();
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

sleep(1);
std::cout << YELLOW << "\n============================ 5 - OBSERVERS =======================" << RESET << std::endl ;

std::cout << "===== key_comp =====" << std::endl << std::endl;
std::cout << "===== value_comp =====" << std::endl << std::endl;


std::cout << "===== find =====" << std::endl << std::endl;

ft_set.insert(42);
std_set.insert(42);
FT_START;
std::cout << "FT find 42 : " << *ft_set.find(42) << std::endl;
FT_END;

STD_START;
std::cout << "STD find 42 : " << *std_set.find(42) << std::endl;
STD_END;


std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

std::cout << "===== count =====" << std::endl << std::endl;

FT_START;
std::cout << "FT count 42 : " << ft_set.count(42) << std::endl;
FT_END;

STD_START;
std::cout << "STD count 42 : " << std_set.count(42) << std::endl;
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

std::cout << "===== lower_bound =====" << std::endl << std::endl;

FT_START;
std::cout << "FT lower_bound 42 : " << *ft_set.lower_bound(42) << std::endl;
FT_END;

STD_START;
std::cout << "STD lower_bound 42 : " << *std_set.lower_bound(42) << std::endl;
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

std::cout << "===== upper_bound =====" << std::endl << std::endl;

FT_START;
std::cout << "FT upper_bound 42 : " << *ft_set.upper_bound(42) << std::endl;
FT_END;

STD_START;
std::cout << "STD upper_bound 42 : " << *std_set.upper_bound(42) << std::endl;
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

std::cout << "===== equal_range =====" << std::endl << std::endl;

FT_START;
std::cout << "FT equal_range 42 : " << *ft_set.equal_range(42).first << std::endl;
FT_END;

STD_START;
std::cout << "STD equal_range 42 : " << *std_set.equal_range(42).first << std::endl;
STD_END;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
COMPARE_TIMES;

sleep(1);
std::cout << YELLOW << "\n============================ 6 - OPERATIONS =======================" << RESET << std::endl ;

	std::cout << MAGENTA<< "\n\n== for FT ==" << RESET <<std::endl;

    FT_START
    ft::set<int> ft_comp1;
    ft::set<int> ft_comp2;
    ft_comp1.insert(1);
    ft_comp1.insert(0);
    ft_comp1.insert(867);
    ft_comp2.insert(78);
    ft_comp2.insert(56);
    ft_comp2.insert(25);

    std::cout << "ft_comp1 == ft_comp2 : ";
    (ft_comp1 == ft_comp2) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    std::cout << "ft_comp1 != ft_comp2 : ";
    (ft_comp1 != ft_comp2) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    std::cout << "ft_comp1 < ft_comp2 : ";
    (ft_comp1 < ft_comp2) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    std::cout << "ft_comp1 > ft_comp2 : ";
    (ft_comp1 > ft_comp2) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    std::cout << "ft_comp1 <= ft_comp2 : ";
    (ft_comp1 <= ft_comp2) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    std::cout << "ft_comp1 >= ft_comp2 : ";
    (ft_comp1 >= ft_comp2) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    FT_END

    std::cout << MAGENTA<< "\n\n== for STD ==" << RESET <<std::endl;

    STD_START
    std::set<int> std_comp1;
    std::set<int> std_comp2;
    std_comp1.insert(1);
    std_comp1.insert(0);
    std_comp1.insert(867);
    std_comp2.insert(78);
    std_comp2.insert(56);
    std_comp2.insert(25);

    std::cout << "std_comp1 == std_comp2 : ";
    (std_comp1 == std_comp2) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    std::cout << "std_comp1 != std_comp2 : ";
    (std_comp1 != std_comp2) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    std::cout << "std_comp1 < std_comp2 : ";
    (std_comp1 < std_comp2) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    std::cout << "std_comp1 > std_comp2 : ";
    (std_comp1 > std_comp2) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    std::cout << "std_comp1 <= std_comp2 : ";
    (std_comp1 <= std_comp2) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    std::cout << "std_comp1 >= std_comp2 : ";
    (std_comp1 >= std_comp2) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    STD_END

    std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
    COMPARE_TIMES;

return 0;
}