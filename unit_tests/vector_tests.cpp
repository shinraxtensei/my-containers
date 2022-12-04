/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_tests.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:48:49 by ahouari           #+#    #+#             */
/*   Updated: 2022/12/02 12:48:51 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"


 int vector_unit_tests()
{
std::cout << "============================ THE TEST BEGINS  =======================" << std::endl;
std::cout << YELLOW << "============================ 1 - CONSTRUCTORS =======================" << RESET << std::endl ;

std::cout << "===== Default constructor =====" << std::endl << std::endl;

ft::vector<int> myvector;
std::vector<int> stdvector;

for (int i = 0; i < 10; i++){myvector.push_back(i);};
for (int i = 0; i < 10; i++){stdvector.push_back(i);};

std::cout << "===== fill constructor =====" << std::endl << std::endl;

ft::vector<int> myvector2(10, 69);
std::vector<int> stdvector2(10, 69);

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== range constructor =====" << std::endl << std::endl;

ft::vector<int> myvector3(myvector.begin(), myvector.end());
std::vector<int> stdvector3(stdvector.begin(), stdvector.end());
std::cout << GREEN << "===== OK ====="  << RESET << std::endl;



std::cout << "===== copy constructor =====" << std::endl << std::endl;

ft::vector<int> myvector4(myvector3);
std::vector<int> stdvector4(stdvector3);
std::cout << GREEN << "===== OK ====="  << RESET << std::endl;



std::cout << "===== operator= =====" << std::endl << std::endl;

ft::vector<int> myvector5;
myvector5 = myvector4;
std::cout << GREEN << "===== OK ====="  << RESET << std::endl;




sleep(1);

std::cout << YELLOW << "============================ 2 - Iterators =======================" << RESET << std::endl ;

std::cout << "===== begin =====" << std::endl << std::endl;

ft::vector<int>::iterator ft_it = myvector.begin();
std::vector<int>::iterator std_it = stdvector.begin();
std::cout << "the begin of ft_it is: " << *ft_it << std::endl;
std::cout << "the begin of std_it is: " << *std_it << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== end =====" << std::endl << std::endl;

ft::vector<int>::iterator ft_it2 = myvector.end();
std::vector<int>::iterator std_it2 = stdvector.end();
ft_it2--;std_it2--;
std::cout << "the end of ft_it is: " << *ft_it2 << std::endl;
std::cout << "the end of std_it is: " << *std_it2 << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== rbegin =====" << std::endl << std::endl;

ft::vector<int>::reverse_iterator ft_rit = myvector.rbegin();
std::vector<int>::reverse_iterator std_rit = stdvector.rbegin();

std::cout << "the rbegin of ft_rit is: " << *ft_rit << std::endl;
std::cout << "the rbegin of std_rit is: " << *std_rit << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== rend =====" << std::endl << std::endl;

ft::vector<int>::reverse_iterator ft_rit2 = myvector.rend();
std::vector<int>::reverse_iterator std_rit2 = stdvector.rend();
ft_rit2--;std_rit2--;
std::cout << "the rend of ft_rit is: " << *ft_rit2 << std::endl;
std::cout << "the rend of std_rit is: " << *std_rit2 << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


sleep(1);
std::cout << YELLOW << "============================ 3 - Capacity =======================" << RESET << std::endl ;

std::cout << "===== size =====" << std::endl << std::endl;

std::cout << "the size of myvector is: " << myvector.size() << std::endl;
std::cout << "the size of stdvector is: " << stdvector.size() << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== max_size =====" << std::endl << std::endl;

std::cout << "the max_size of myvector is: " << myvector.max_size() << std::endl;
std::cout << "the max_size of stdvector is: " << stdvector.max_size() << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== resize =====" << std::endl << std::endl;

myvector.resize(5);
stdvector.resize(5);

std::cout << "the size of myvector is: " << myvector.size() << std::endl;
std::cout << "the size of stdvector is: " << stdvector.size() << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== capacity =====" << std::endl << std::endl;

std::cout << "the capacity of myvector is: " << myvector.capacity() << std::endl;
std::cout << "the capacity of stdvector is: " << stdvector.capacity() << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== empty =====" << std::endl << std::endl;

std::cout << "the empty of myvector is: " << myvector.empty() << std::endl;
std::cout << "the empty of stdvector is: " << stdvector.empty() << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== reserve =====" << std::endl << std::endl;

myvector.reserve(100);
stdvector.reserve(100);

std::cout << "the capacity of myvector is: " << myvector.capacity() << std::endl;
std::cout << "the capacity of stdvector is: " << stdvector.capacity() << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


sleep(1);
std::cout << YELLOW << "============================ 4 - Element access =======================" << RESET << std::endl ;

std::cout << "===== operator[] =====" << std::endl << std::endl;

std::cout << "the element of myvector[2] is: " << myvector[2] << std::endl;
std::cout << "the element of stdvector[2] is: " << stdvector[2] << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== at =====" << std::endl << std::endl;

std::cout << "the element of myvector.at(2) is: " << myvector.at(2) << std::endl;
std::cout << "the element of stdvector.at(2) is: " << stdvector.at(2) << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== front =====" << std::endl << std::endl;

std::cout << "the element of myvector.front() is: " << myvector.front() << std::endl;
std::cout << "the element of stdvector.front() is: " << stdvector.front() << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== back =====" << std::endl << std::endl;

std::cout << "the element of myvector.back() is: " << myvector.back() << std::endl;
std::cout << "the element of stdvector.back() is: " << stdvector.back() << std::endl;

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


sleep(1);
std::cout << YELLOW << "============================ 5 - Modifiers =======================" << RESET << std::endl ;


std::cout << "===== assign with fill =====" << std::endl << std::endl;

myvector.assign(7, 100);
stdvector.assign(7, 100);

std::cout << "myvector contains:";
CONTENT(myvector);
std::cout << "stdvector contains:";
CONTENT(stdvector);

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== assign with range =====" << std::endl << std::endl;


myvector.assign(myvector2.begin(), myvector2.end());
stdvector.assign(stdvector2.begin(), stdvector2.end());

std::cout << "myvector contains:";
CONTENT(myvector);
std::cout << "stdvector contains:";
CONTENT(stdvector);



std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== push_back =====" << std::endl << std::endl;

myvector.push_back(200);
stdvector.push_back(200);

std::cout << "myvector contains:";
CONTENT(myvector);
std::cout << "stdvector contains:";
CONTENT(stdvector);

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== pop_back =====" << std::endl << std::endl;

myvector.pop_back();
stdvector.pop_back();

std::cout << "myvector contains:";
CONTENT(myvector);
std::cout << "stdvector contains:";
CONTENT(stdvector);


std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== insert single element =====" << std::endl << std::endl;

myvector.insert(myvector.begin(), 300);
stdvector.insert(stdvector.begin(), 300);

std::cout << "myvector contains:";
CONTENT(myvector);
std::cout << "stdvector contains:";
CONTENT(stdvector);

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== insert fill =====" << std::endl << std::endl;

myvector.insert(myvector.begin(), 2, 400);
stdvector.insert(stdvector.begin(), 2, 400);

std::cout << "myvector contains:";
CONTENT(myvector);
std::cout << "stdvector contains:";
CONTENT(stdvector);

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== insert range =====" << std::endl << std::endl;

myvector.insert(myvector.begin(), myvector2.begin(), myvector2.end());
stdvector.insert(stdvector.begin(), stdvector2.begin(), stdvector2.end());

std::cout << "myvector contains:";
CONTENT(myvector);
std::cout << "stdvector contains:";
CONTENT(stdvector);

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== erase single element =====" << std::endl << std::endl;

myvector.erase(myvector.begin());
stdvector.erase(stdvector.begin());

std::cout << "myvector contains:";
CONTENT(myvector);
std::cout << "stdvector contains:";
CONTENT(stdvector);

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== erase range =====" << std::endl << std::endl;

myvector.erase(myvector.begin(), myvector.end());
stdvector.erase(stdvector.begin(), stdvector.end());

std::cout << "myvector contains:";
CONTENT(myvector);
std::cout << "stdvector contains:";
CONTENT(stdvector);


std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== swap =====" << std::endl << std::endl;



myvector.insert(myvector.begin(),5,42);
stdvector.insert(stdvector.begin(),5,42);

std::cout << "myvector and stdvector before swap contains: \n";
CONTENT(myvector);
CONTENT(stdvector);
std::cout << "myvector2 and stdvector2 before contains: \n";
CONTENT(myvector2);
CONTENT(stdvector2);

myvector.swap(myvector2);
stdvector.swap(stdvector2);

std::cout << CYAN << "\nswaping ... bip boop" << RESET << std::endl;


std::cout << "\nmyvector and stdvector after contains: \n";
CONTENT(myvector);
CONTENT(stdvector);
std::cout << "myvector2 and stdvector2 after contains: \n";
CONTENT(myvector2);
CONTENT(stdvector2);

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== clear =====" << std::endl << std::endl;

myvector.clear();
stdvector.clear();

std::cout << "myvector contains:";
CONTENT(myvector);
std::cout << "stdvector contains:";
CONTENT(stdvector);


std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


std::cout << "===== swap =====" << std::endl << std::endl;


myvector.swap(myvector2);
stdvector.swap(stdvector2);

std::cout << "myvector contains:";
CONTENT(myvector);
std::cout << "stdvector contains:";
CONTENT(stdvector);

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


sleep(1);

std::cout << YELLOW << "============================ 6 - Allocator =======================" << RESET << std::endl ;

std::cout << "===== get_allocator =====" << std::endl << std::endl;

int * p;
int * p2;

p = myvector.get_allocator().allocate(5);
p2 = stdvector.get_allocator().allocate(5);

std::cout << "myvector contains:";
CONTENT(myvector);
std::cout << "stdvector contains:";
CONTENT(stdvector);

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;



std::cout << "===== deallocate =====" << std::endl << std::endl;

myvector.get_allocator().deallocate(p,5);
stdvector.get_allocator().deallocate(p2,5);

std::cout << "myvector contains:";
CONTENT(myvector);
std::cout << "stdvector contains:";
CONTENT(stdvector);

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;

sleep(1);


std::cout << YELLOW << "============================ 7 - Relational operators =======================" << RESET << std::endl ;



    std::cout << "myvector == stdvector: ";
     (myvector == myvector2) ? std::cout << "true \n" : std::cout << "false \n" ;
    std::cout << "myvector  != stdvector: ";
     (myvector != myvector2) ? std::cout << "true \n" : std::cout << "false \n" ;
    std::cout << "myvector  < stdvector: ";
        (myvector < myvector2) ? std::cout << "true \n" : std::cout << "false \n" ;
    std::cout << "myvector  <= stdvector: ";
        (myvector <= myvector2) ? std::cout << "true \n" : std::cout << "false \n" ;
    std::cout << "myvector  > stdvector: ";
        (myvector > myvector2) ? std::cout << "true \n" : std::cout << "false \n" ;
    std::cout << "myvector  >= stdvector: ";
        (myvector >= myvector2) ? std::cout << "true \n" : std::cout << "false \n" ;
    

std::cout << GREEN << "===== OK ====="  << RESET << std::endl;


return (0);
} 

