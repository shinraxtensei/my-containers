#include <iostream>
#include <map>
#include "../type_traits.../pair.hpp"
#include "../containers/map.hpp"


#define REDD "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN "\033[1;36m"
#define WHITE "\033[1;37m"
#define RESET "\033[0m"




double ft_start;
double ft_end;
double std_start;
double std_end;


#define FT_START ft_start = clock();
#define FT_END  ft_end = clock();
#define STD_START std_start = clock();
#define STD_END  std_end = clock();

#define COMPARE_TIMES compare_times(ft_start - ft_end, std_start - std_end);

void compare_times(double first, double second)
{
    std::string result;
    double ratio = first / second;
    if (ratio > 1)
        result = "FT is " + std::to_string(ratio) + " times faster than STD";
    else if (ratio < 1)
        result = "STD is " + std::to_string(1 / ratio) + " times faster than FT";
    else
        result = "both are equal";
    std::cout<< BLUE << result << RESET << std::endl;
}



int main(void)
{



	std::cout << "============================ THE TEST BEGINS  =======================" << std::endl;
	std::cout << "============================ LET THE BEST WIN =======================" << std::endl << std::endl;


	std::cout << YELLOW << "============================ 1 - CONSTRUCTORS =======================" << RESET << std::endl ;

	std::cout << "===== Default constructor =====" << std::endl << std::endl;
	
	FT_START;
	ft::map<char,int> ft_first;
	for (int i = 0; i < 100 ; i++)	{ft_first[i] = i;}
	FT_END;

	STD_START;
	std::map<char,int> std_first;
	for (int i = 0; i < 100 ; i++)	{std_first[i] = i;}
	STD_END;
	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;

	std::cout <<   "\n===== Range constructor =====" << std::endl << std::endl;

	FT_START;
	ft::map<char,int> ft_second (ft_first.begin(),ft_first.end());
	FT_END;

	STD_START;
	std::map<char,int> std_second (std_first.begin(),std_first.end());
	STD_END;
	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;

	std::cout << "\n===== Copy constructor =====" << std::endl << std::endl;

	FT_START;
	ft::map<char,int> ft_third (ft_second);
	FT_END;

	STD_START;
	std::map<char,int> std_third (std_second);
	STD_END;
	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;

	std::cout << "\n===== Copy operator =====" << std::endl << std::endl;

	FT_START;
	ft::map<char,int> ft_fourth;
	ft_fourth = ft_second;
	FT_END;

	STD_START;
	std::map<char,int> std_fourth;
	std_fourth = std_second;
	STD_END;
	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;

	
	// make a while loop and instert 1000 elements in the map
	

	std::cout << YELLOW << "\n============================ 2 - ITERATORS =======================" << RESET << std::endl ;

	std::cout << "\n===== begin =====" << std::endl << std::endl;

	FT_START;
	ft::map<char,int>::iterator ft_it = ft_first.begin() ;
	std::cout << "first element is: " << ft_it->first << " => " << ft_it->second << std::endl;
	FT_END;

	STD_START;
	std::map<char,int>::iterator std_it = std_first.begin() ;
	std::cout << "first element is: " << std_it->first << " => " << std_it->second << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;

	std::cout << "\n===== end =====" << std::endl << std::endl;

	FT_START;
	ft::map<char,int>::iterator ft_it_end = ft_first.end();
	ft_it_end--;
	std::cout << "last element is: " << ft_it_end->first << " => " << ft_it_end->second << std::endl;
	FT_END;

	STD_START;
	std::map<char,int>::iterator std_it_end = std_first.end();
	std_it_end--;
	std::cout << "last element is: " << std_it_end->first << " => " << std_it_end->second << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;


	std::cout << "\n===== end =====" << std::endl << std::endl;

	FT_START;
	ft::map<char,int>::reverse_iterator ft_rit = ft_first.rbegin() ;
	std::cout << "first element is: " << ft_rit->first << " => " << ft_rit->second << std::endl;
	FT_END;

	STD_START;
	std::map<char,int>::reverse_iterator std_rit = std_first.rbegin() ;
	std::cout << "first element is: " << std_rit->first << " => " << std_rit->second << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;

	std::cout << "\n===== rend =====" << std::endl << std::endl;

	FT_START;
	ft::map<char,int>::reverse_iterator ft_rit_end = ft_first.rend();
	ft_rit_end--;
	std::cout << "last element is: " << ft_rit_end->first << " => " << ft_rit_end->second << std::endl;
	FT_END;

	STD_START;
	std::map<char,int>::reverse_iterator std_rit_end = std_first.rend();
	std_rit_end--;
	std::cout << "last element is: " << std_rit_end->first << " => " << std_rit_end->second << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;

	std::cout << YELLOW << "\n============================ 3 - CAPACITY/SIZE AND RELATED STUFF =======================" << RESET << std::endl ;

	std::cout << "\n===== empty =====" << std::endl << std::endl;

	FT_START;
	ft_first.clear();
	std::cout << "ft_first is " << (ft_first.empty() ? "empty" : "not empty") << std::endl;
	FT_END;

	STD_START;
	std_first.clear();
	std::cout << "std_first is " << (std_first.empty() ? "empty" : "not empty") << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;

	std::cout << "\n===== size =====" << std::endl << std::endl;

	FT_START;
	for (char c='a'; c<='z'; c++) {ft_first[c]=c;}
	std::cout << "ft_first size is :" << ft_first.size() << std::endl;
	FT_END;

	STD_START;
	for (char c='a'; c<='z'; c++) {std_first[c]=c;}
	std::cout << "std_first size is :" << std_first.size() << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;

	std::cout << "\n===== max_size =====" << std::endl << std::endl;

	FT_START;
	std::cout << "ft_first max_size is :" << ft_first.max_size() << std::endl;
	FT_END;

	STD_START;
	std::cout << "std_first max_size is :" << std_first.max_size() << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;


	std::cout << YELLOW << "\n============================ 4 - ELEMENT ACCESS =======================" << RESET << std::endl ;

	std::cout << "\n===== operator[] =====" << std::endl << std::endl;

	FT_START;
	ft_first['a'] = 10;
	ft_first['b'] = 30;
	ft_first['c'] = 50;
	ft_first['d'] = 70;
	std::cout << "ft_first['b'] is " << ft_first['b'] << std::endl;
	FT_END;

	STD_START;
	std_first['a'] = 10;
	std_first['b'] = 30;
	std_first['c'] = 50;
	std_first['d'] = 70;
	std::cout << "std_first['b'] is " << std_first['b'] << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;

	std::cout << "\n===== at =====" << std::endl << std::endl;

	FT_START;
	std::cout << "ft_first.at('b') is " << ft_first.at('b') << std::endl;
	FT_END;

	STD_START;
	std::cout << "std_first.at('b') is " << ft_first.at('b') << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;

	std::cout << YELLOW << "\n============================ 5 - MODIFIERS =======================" << RESET << std::endl ;

	std::cout << "\n===== insert =====" << std::endl << std::endl;

	FT_START;
	ft_second.insert ( ft::pair<char,int>('a',100) );
	ft_second.insert ( ft::pair<char,int>('z',200) );
	ft::pair<ft::map<char,int>::iterator,bool> ft_ret;
	ft_ret = ft_second.insert ( ft::pair<char,int>('z',500) );
	if (ft_ret.second==false) {
		std::cout << "element 'z' already existed";
		std::cout << " with a value of " << ft_ret.first->second << std::endl;
	}
	FT_END;

	STD_START;
	std_second.insert ( std::pair<char,int>('a',100) );
	std_second.insert ( std::pair<char,int>('z',200) );
	std::pair<std::map<char,int>::iterator,bool> std_ret;
	std_ret = std_second.insert ( std::pair<char,int>('z',500) );
	if (std_ret.second==false) {
		std::cout << "element 'z' already existed";
		std::cout << " with a value of " << std_ret.first->second << std::endl;
	}
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;


	std::cout << "\n===== erase =====" << std::endl << std::endl;

	FT_START;
	ft_it = ft_second.begin();
	ft_second.erase (ft_it); // erasing by iterator
	ft_second.erase ('z'); // erasing by key
	std::cout << "elements erased" << std::endl;
	FT_END;

	STD_START;
	std_it = std_second.begin();
	std_second.erase (std_it); // erasing by iterator
	std_second.erase ('z'); // erasing by key
	std::cout << "elements erased" << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;

	std::cout << "\n===== swap =====" << std::endl << std::endl;

	std::cout << MAGENTA<< "== for FT ==" << RESET <<std::endl;
	FT_START;
	ft_first.clear();
	ft_second.clear();
	for (char c='a'; c<='f'; c++) {ft_first[c]=c;}
	for (int i = 0 ; i < 10 ; i++) {ft_second[i]=i;}
	
	std::cout << "ft_first contains:" << std::endl;
	for (ft_it=ft_first.begin(); ft_it!=ft_first.end(); ++ft_it)
		std::cout << ft_it->first << " => " << ft_it->second << " |	" ;
	std::cout << "\nft_second contains:" << std::endl;
	for (ft_it=ft_second.begin(); ft_it!=ft_second.end(); ++ft_it)
		std::cout << ft_it->first << " => " << ft_it->second << " |	" ;

	ft_first.swap(ft_second);

	std::cout << "\n\nft_first contains:" << std::endl;
	for (ft_it=ft_first.begin(); ft_it!=ft_first.end(); ++ft_it)
		std::cout << ft_it->first << " => " << ft_it->second << " |	" ;
	std::cout << "\nft_second contains:" << std::endl;
	for (ft_it=ft_second.begin(); ft_it!=ft_second.end(); ++ft_it)
		std::cout << ft_it->first << " => " << ft_it->second << " |	" ;

	FT_END;


	std::cout << MAGENTA<< "\n\n== for STD ==" << RESET <<std::endl;

	STD_START;
	std_first.clear();
	std_second.clear();
	for (char c='a'; c<='f'; c++) {std_first[c]=c;}
	for (int i = 0 ; i < 10 ; i++) {std_second[i]=i;}

	std::cout << "\nstd_first contains:" << std::endl;
	for (std_it=std_first.begin(); std_it!=std_first.end(); ++std_it)
		std::cout << std_it->first << " => " << std_it->second << " |	" ;
	std::cout << "\nstd_second contains:" << std::endl;
	for (std_it=std_second.begin(); std_it!=std_second.end(); ++std_it)
		std::cout << std_it->first << " => " << std_it->second << " |	" ;
	
	std_first.swap(std_second);

	std::cout << "\n\nstd_first contains:" << std::endl;
	for (std_it=std_first.begin(); std_it!=std_first.end(); ++std_it)
		std::cout << std_it->first << " => " << std_it->second << " |	" ;
	std::cout << "\nstd_second contains:" << std::endl;
	for (std_it=std_second.begin(); std_it!=std_second.end(); ++std_it)
		std::cout << std_it->first << " => " << std_it->second << " |	" ;
	
	STD_END;

	std::cout << GREEN << "\n===== OK ====="  << std::endl;
	COMPARE_TIMES;


	std::cout << "\n===== clear =====" << std::endl << std::endl;

	FT_START;
	ft_first.clear();
	ft_second.clear();
	std::cout << "containers cleared" << std::endl;
	FT_END;

	STD_START;
	std_first.clear();
	std_second.clear();
	std::cout << "containers cleared" << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;

	std::cout << "\n===== find =====" << std::endl << std::endl;

	FT_START;
	for (char c='a'; c<='z'; c++) {ft_first[c]=c;}
	ft_it = ft_first.find('z');
	if (ft_it != ft_first.end())
		std::cout << "element found: " << ft_it->first << " => " << ft_it->second << std::endl;
	else
		std::cout << "element not found" << std::endl;
	FT_END;

	STD_START;
	for (char c='a'; c<='z'; c++) {std_first[c]=c;}
	std_it = std_first.find('z');
	if (std_it != std_first.end())
		std::cout << "element found: " << std_it->first << " => " << std_it->second << std::endl;
	else
		std::cout << "element not found" << std::endl;

	STD_END;
	
	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;


	std::cout << "\n===== count =====" << std::endl << std::endl;

	FT_START;
	for (char c='a'; c<='z'; c++) {ft_first[c]=c;}
	std::cout << "ft_first contains " << ft_first.count('z') << " elements with key 'z'" << std::endl;
	FT_END;

	STD_START;
	for (char c='a'; c<='z'; c++) {std_first[c]=c;}
	std::cout << "std_first contains " << std_first.count('z') << " elements with key 'z'" << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;


	std::cout << "\n===== lower_bound =====" << std::endl << std::endl;

	FT_START;
	for (char c='a'; c<='z'; c++) {ft_first[c]=c;}
	ft_it = ft_first.lower_bound('z');
	if (ft_it != ft_first.end())
		std::cout << "lower bound found: " << ft_it->first << " => " << ft_it->second << std::endl;
	else
		std::cout << "lower bound not found" << std::endl;
	FT_END;

	STD_START;
	for (char c='a'; c<='z'; c++) {std_first[c]=c;}
	std_it = std_first.lower_bound('z');
	if (std_it != std_first.end())
		std::cout << "lower bound found: " << std_it->first << " => " << std_it->second << std::endl;
	else
		std::cout << "lower bound not found" << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;


	std::cout << "\n===== upper bound =====" << std::endl << std::endl;

	FT_START;
	for (char c='a'; c<='z'; c++) {ft_first[c]=c;}
	ft_it = ft_first.upper_bound('z');
	if (ft_it != ft_first.end())
		std::cout << "upper bound found: " << ft_it->first << " => " << ft_it->second << std::endl;
	else
		std::cout << "upper bound not found" << std::endl;
	FT_END;

	STD_START;
	for (char c='a'; c<='z'; c++) {std_first[c]=c;}
	std_it = std_first.upper_bound('z');
	if (std_it != std_first.end())
		std::cout << "upper bound found: " << std_it->first << " => " << std_it->second << std::endl;
	else
		std::cout << "upper bound not found" << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;


	std::cout << YELLOW << "\n============================ 6 - EQUAL_RANGE =======================" << RESET << std::endl ;

 	
	std::cout << MAGENTA<< "\n\n== for FT ==" << RESET <<std::endl;

	FT_START;

	ft::map<char,int> ft_equal_range_map;

	ft_equal_range_map['a']=10;
	ft_equal_range_map['b']=20;
	ft_equal_range_map['c']=30;

	ft::pair<ft::map<char,int>::iterator,ft::map<char,int>::iterator> ret;
	ret = ft_equal_range_map.equal_range('b');

	std::cout << "lower bound points to: ";
	std::cout << ret.first->first << " => " << ret.first->second << '\n';

	std::cout << "upper bound points to: ";
	std::cout << ret.second->first << " => " << ret.second->second << '\n';

	FT_END;
 
	std::cout << std::endl;

	STD_START;

	std::map<char,int> std_equal_range_map;

	std_equal_range_map['a']=10;
	std_equal_range_map['b']=20;
	std_equal_range_map['c']=30;

	std::pair<std::map<char,int>::iterator,std::map<char,int>::iterator> ret2;
	ret2 = std_equal_range_map.equal_range('b');
	
	std::cout << "lower bound points to: ";
	std::cout << ret2.first->first << " => " << ret2.first->second << '\n';

	std::cout << "upper bound points to: ";
	std::cout << ret2.second->first << " => " << ret2.second->second << '\n';

	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;


	std::cout << YELLOW << "\n============================ 7 - OBSERVERS =======================" << RESET << std::endl ;

	std::cout << "\n===== key_comp =====" << std::endl << std::endl;

	FT_START;
	ft::map<char,int> ft_first2;
	ft::map<char,int>::key_compare ft_comp = ft_first2.key_comp();
	for (char c='a'; c<='z'; c++) {ft_first2[c]=c;}
	std::cout << "ft_first2 contains:";
	char ft_highest = ft_first2.rbegin()->first;     // key value of last element
	ft::map<char,int>::iterator ft_it2 = ft_first2.begin();
	do {
		std::cout << " " << ft_it2->first << ":" << ft_it2->second;
	} while ( ft_comp((*ft_it2++).first, ft_highest) );
	std::cout << std::endl;
	FT_END;

	STD_START;
	std::map<char,int> std_first2;
	std::map<char,int>::key_compare std_comp = std_first2.key_comp();
	for (char c='a'; c<='z'; c++) {std_first2[c]=c;}
	std::cout << "std_first2 contains:";
	char std_highest = std_first2.rbegin()->first;     // key value of last element
	std::map<char,int>::iterator std_it2 = std_first2.begin();
	do {
		std::cout << " " << std_it2->first << ":" << std_it2->second;
	} while ( std_comp((*std_it2++).first, std_highest) );

	std::cout << std::endl;
	STD_END;
	
	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES


	std::cout << "\n===== value_comp =====" << std::endl << std::endl;

	FT_START;
	ft::map<char,int> ft_first3;
	ft::map<char,int>::value_compare ft_comp2 = ft_first3.value_comp();
	for (char c='a'; c<='z'; c++) {ft_first3[c]=c;}
	std::cout << "ft_first3 contains:";
	ft::pair<char,int> ft_highest2 = *ft_first3.rbegin();          // last element
	ft::map<char,int>::iterator ft_it3 = ft_first3.begin();
	do {
		std::cout << " " << ft_it3->first << ":" << ft_it3->second;
	} while ( ft_comp2(*ft_it3++, ft_highest2) );
	std::cout << std::endl;
	FT_END;

	STD_START;
	std::map<char,int> std_first3;
	std::map<char,int>::value_compare std_comp2 = std_first3.value_comp();
	for (char c='a'; c<='z'; c++) {std_first3[c]=c;}
	std::cout << "std_first3 contains:";
	std::pair<char,int> std_highest2 = *std_first3.rbegin();          // last element
	std::map<char,int>::iterator std_it3 = std_first3.begin();
	do {
		std::cout << " " << std_it3->first << ":" << std_it3->second;
	} while ( std_comp2(*std_it3++, std_highest2) );
	std::cout << std::endl;
	STD_END;
	
	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES


	std::cout << YELLOW << "\n============================ 8 - COMPARAISON =======================" << RESET << std::endl ;
	std::cout << "============================ COMPARAISON =======================" << std::endl << std::endl;

	std::cout << MAGENTA<< "\n\n== for FT ==" << RESET <<std::endl;

	FT_START;
	ft::map<char,int> ft_first4;
	ft::map<char,int> ft_second4;
	ft_first4['a']=10;
	ft_first4['b']=20;
	ft_first4['c']=30;
	ft_second4['a']=10;
	ft_second4['b']=20;
	ft_second4['c']=30;
	std::cout << "ft_first4 == ft_second4 ";
	(ft_first4==ft_second4) ? std::cout << ": True\n" : std::cout << ": False\n";

	std::cout << "ft_first4 != ft_second4 ";
	(ft_first4!=ft_second4) ? std::cout << ": True\n" : std::cout << ": False\n";

	std::cout << "ft_first4 < ft_second4 ";
	(ft_first4<ft_second4) ? std::cout << ": True\n" : std::cout << ": False\n";

	std::cout << "ft_first4 > ft_second4 ";
	(ft_first4>ft_second4) ? std::cout << ": True\n" : std::cout << ": False\n";

	std::cout << "ft_first4 <= ft_second4 ";
	(ft_first4<=ft_second4) ? std::cout << ": True\n" : std::cout << ": False\n";

	std::cout << "ft_first4 >= ft_second4 ";
	(ft_first4>=ft_second4) ? std::cout << ": True\n" : std::cout << ": False\n";
	FT_END;

	std::cout << MAGENTA<< "\n\n== for STD ==" << RESET <<std::endl;

	STD_START;
	std::map<char,int> std_first4;
	std::map<char,int> std_second4;
	std_first4['a']=10;
	std_first4['b']=20;
	std_first4['c']=30;
	std_second4['a']=10;
	std_second4['b']=20;
	std_second4['c']=30;

	std::cout << "std_first4 == std_second4 ";
	(std_first4==std_second4) ? std::cout << ": True\n" : std::cout << ": False\n";

	std::cout << "std_first4 != std_second4 ";
	(std_first4!=std_second4) ? std::cout << ": True\n" : std::cout << ": False\n";

	std::cout << "std_first4 < std_second4 ";
	(std_first4<std_second4) ? std::cout << ": True\n" : std::cout << ": False\n";

	std::cout << "std_first4 > std_second4 ";
	(std_first4>std_second4) ? std::cout << ": True\n" : std::cout << ": False\n";

	std::cout << "std_first4 <= std_second4 ";
	(std_first4<=std_second4) ? std::cout << ": True\n" : std::cout << ": False\n";

	std::cout << "std_first4 >= std_second4 ";
	(std_first4>=std_second4) ? std::cout << ": True\n" : std::cout << ": False\n";

	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES
	



}