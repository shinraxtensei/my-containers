/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_tests.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:48:32 by ahouari           #+#    #+#             */
/*   Updated: 2022/12/02 12:48:34 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "tests.hpp"

int map_unit_tests()
{
	double ft_start , ft_end , std_start , std_end ;
	std::cout << "============================ THE TEST BEGINS  =======================" << std::endl;


	std::cout << YELLOW << "============================ 1 - CONSTRUCTORS =======================" << RESET << std::endl ;

	std::cout << "===== Default constructor =====" << std::endl << std::endl;
		srand(time(NULL)); // random seed to generate random numbers the does not repeat
	
	FT_START;
	ft::map<char , int> ft_first;
	for ( int  i=  0; i < 10 ; i++) { ft_first.insert(ft::make_pair( 'a' + i ,  rand()% 100));}
	for(ft::map<char,int>::iterator it = ft_first.begin() ; it != ft_first.end() ; it++) 
		std::cout << CYAN << it->first <<  " => " << it->second << RESET << " |";
	std::cout << std::endl;
	FT_END;

	STD_START;
	std::map<char , int> std_first;
	
		for ( int  i=  0; i < 10 ; i++) { std_first.insert(std::make_pair( 'a' + i  ,  rand() % 100));}
		for (std::map<char,int>::iterator it = std_first.begin(); it != std_first.end(); it++)
			std::cout << MAGENTA << it->first << " => " << it->second  << RESET<< " |";
		std::cout << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << RESET << std::endl;
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

	std::cout << "\n===== assignement operator =====" << std::endl << std::endl;

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

	sleep(1);
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


	std::cout << "\n===== rbegin =====" << std::endl << std::endl;

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

	sleep(1);
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

	sleep(1);
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

	sleep(1);
	std::cout << YELLOW << "\n============================ 5 - MODIFIERS =======================" << RESET << std::endl ;

	std::cout << "\n===== insert =====" << std::endl;

	FT_START;
		std::cout << MAGENTA<< "\n\n== for FT ==" << RESET <<std::endl;
	std::cout << "ft_second before insert contains:" << std::endl;
	for (ft::map<char,int>::iterator it=ft_second.begin(); it!=ft_second.end(); ++it)
		std::cout << it->first << " => " << it->second << std::endl;
	ft_second.insert ( ft::pair<char,int>('*',69) );
	ft_second.insert ( ft::pair<char,int>('+',69) );
	std::cout << "ft_second after insert contains:" << std::endl;
	for (ft::map<char,int>::iterator it=ft_second.begin(); it!=ft_second.end(); ++it)
		std::cout << it->first << " => " << it->second << std::endl;

	// try to insert a key that already exists
	std::cout << CYAN << "trying to insert the key (+ , 69) that already exists" << RESET << std::endl;
	ft::pair<ft::map<char , int>::iterator , bool> ft_ret;
	ft_ret = ft_second.insert (ft::pair<char,int> ('+', 69));
	if (ft_ret.second == false)
		std::cout << REDD << "+ already existed" <<RESET << std::endl;

	
	FT_END;

	STD_START;
		std::cout << MAGENTA<< "\n\n== for STD ==" << RESET <<std::endl;
	std::cout << "std_second before insert contains:" << std::endl;
	for (std::map<char,int>::iterator it=std_second.begin(); it!=std_second.end(); ++it)
		std::cout << it->first << " => " << it->second << std::endl;
	std_second.insert ( std::pair<char,int>('*',69) );
	std_second.insert ( std::pair<char,int>('+',69) );
	std::cout << "std_second after insert contains:" << std::endl;
	for (std::map<char,int>::iterator it=std_second.begin(); it!=std_second.end(); ++it)
		std::cout << it->first << " => " << it->second << std::endl;

	std::cout << CYAN << "trying to insert the key (+ , 69) that already exists" << RESET << std::endl;
	std::pair<std::map<char , int>::iterator , bool> std_ret;
	std_ret = std_second.insert (std::pair<char,int> ('+', 69));
	if (std_ret.second == false)
		std::cout << REDD << "+ already existed" <<RESET << std::endl;
	STD_END;

	std::cout << GREEN << "===== OK ====="  << std::endl;
	COMPARE_TIMES;


	std::cout << "\n===== erase =====" << std::endl << std::endl;

	FT_START;
	std::cout << "ft_second before erase contains:" << std::endl;
	for (ft::map<char,int>::iterator it=ft_second.begin(); it!=ft_second.end(); ++it)
		std::cout << it->first << " => " << it->second << std::endl;
	ft_it = ft_second.begin();
	ft_second.erase (ft_it); // erasing by iterator
	ft_second.erase ('+'); // erasing by key
	std::cout << "elements erased" << std::endl;
	std::cout << "ft_second after erase contains:" << std::endl;
	for (ft::map<char,int>::iterator it=ft_second.begin(); it!=ft_second.end(); ++it)
		std::cout << it->first << " => " << it->second << std::endl;
	FT_END;

	STD_START;
	std::cout << "std_second before erase contains:" << std::endl;
	for (std::map<char,int>::iterator it=std_second.begin(); it!=std_second.end(); ++it)
		std::cout << it->first << " => " << it->second << std::endl;
	std_it = std_second.begin();
	std_second.erase (std_it); // erasing by iterator
	std_second.erase ('+'); // erasing by key
	std::cout << "elements erased" << std::endl;
	std::cout << "std_second after erase contains:" << std::endl;
	for (std::map<char,int>::iterator it=std_second.begin(); it!=std_second.end(); ++it)
		std::cout << it->first << " => " << it->second << std::endl;
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

	sleep(1);
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

	std::cout << MAGENTA<< "\n\n== for STD ==" << RESET <<std::endl;
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

	sleep(1);
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

	sleep(1);
	std::cout << YELLOW << "\n============================ 8 - COMPARAISON =======================" << RESET << std::endl ;

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
	
return (0);
}