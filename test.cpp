/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:34:20 by ahouari           #+#    #+#             */
/*   Updated: 2022/09/24 17:45:24 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./containers/vector.hpp"
#include "./containers/stack.hpp"
#include <iostream>
#include <vector>
#include <stack>

#include <ctime>
#include <cstdlib>

template <typename T>
void    print_vector(T& cont)
{
	for (typename T::const_iterator it = cont.begin(); it != cont.end(); ++it)
		std::cout << "[" << *it << "] | ";
	std::cout << std::endl;
}

template <class Container, class T>
void vect_push_back_one_element(Container c, T toInsert)
{
	std::cout << "push_back one element:" << toInsert << std::endl;
	int start_s = clock();
	c.push_back(toInsert);
	int stop_s = clock();
	std::cout << "vector content : " << std::endl;
	print_vector(c);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void vect_push_back_many_elements_int(Container c, int number)
{
	std::cout << "push_back " << number << " elements" << std::endl;
	int start_s = clock();
	for (int i = 0; i < number; i++)
		c.push_back(rand() % 1000);
	int stop_s = clock();
	std::cout << "size after push_back: " << c.size() << std::endl;
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void vect_push_back_many_elements_str(Container c, int number)
{
	std::cout << "push_back " << number << " elements" << std::endl;
	int start_s = clock();
	for (int i = 0; i < number; i++)
		c.push_back("Cozy");
	int stop_s = clock();
	std::cout << "size after push_back: " << c.size() << std::endl;
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void vect_pop_back_one_element_int(Container c)
{
	std::cout << "pop_back one element" << std::endl;
	c.push_back(42);
	c.push_back(10);
	std::cout << "vector content before pop_back : " << std::endl;
	print_vector(c);
	int start_s = clock();
	c.pop_back();
	int stop_s = clock();
	std::cout << "vector content after pop_back: " << std::endl;
	print_vector(c);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void vect_pop_back_one_element_str(Container c)
{
	std::cout << "pop_back one element" << std::endl;
	c.push_back("So now we pop back");
	c.push_back("Yalla lets do it");
	std::cout << "vector content before pop_back : " << std::endl;
	print_vector(c);
	int start_s = clock();
	c.pop_back();
	int stop_s = clock();
	std::cout << "vector content after pop_back: " << std::endl;
	print_vector(c);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void	vect_insert_one_elem_int(Container c)
{
	c.push_back(42);
	c.push_back(10);
	c.push_back(63);
	c.push_back(24);
	std::cout << "Vector elements before insert:" << std::endl;
	print_vector(c);
	Container tmp = c;
	typename Container::iterator	it = tmp.begin();
	std::cout << "insert one elem at the beginning" << std::endl;
	int start_s = clock();
	tmp.insert(it, 30);
	int stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp1 = c;
	it = tmp1.end();
	std::cout << "insert one elem at the end" << std::endl;
	start_s = clock();
	tmp1.insert(it, 30);
	stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp1);
		std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp2 = c;
	it = tmp2.begin()++;
	std::cout << "insert one elem in the middle" << std::endl;
	start_s = clock();
	tmp2.insert(it, 30);
	stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp2);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void	vect_insert_one_elem_str(Container c)
{
	c.push_back("Bonjour");
	c.push_back("Je suis le Bonheur");
	c.push_back("Quand le code marche bien");
	c.push_back("Je pete");
	std::cout << "Vector elements before insert:" << std::endl;
	print_vector(c);
	Container tmp = c;
	std::cout << "insert one elem at the beginning" << std::endl;
	int start_s = clock();
	typename Container::iterator	it = tmp.begin();
	tmp.insert(it, "LOL");
	int stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp1 = c;
	it = tmp1.end();
	std::cout << "insert one elem at the end" << std::endl;
	start_s = clock();
	tmp1.insert(it, "LOL");
	stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp1);
		std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp2 = c;
	it = tmp2.begin()++;
	std::cout << "insert one elem in the middle" << std::endl;
	start_s = clock();
	tmp2.insert(it, "LOL");
	stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp2);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void	vect_insert_many_elems_int(Container c)
{
	c.push_back(42);
	c.push_back(10);
	c.push_back(63);
	c.push_back(24);
	std::cout << "Vector elements before insert:" << std::endl;
	print_vector(c);
	Container tmp = c;
	typename Container::iterator	it = tmp.begin();
	std::cout << "insert 5 elems at the beginning" << std::endl;
	int start_s = clock();
	tmp.insert(it, 5, 30);
	int stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp1 = c;
	it = tmp1.end();
	std::cout << "insert 5 elems at the end" << std::endl;
	start_s = clock();
	tmp1.insert(it, 5, 30);
	stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp1);
		std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp2 = c;
	it = tmp2.begin()++;
	std::cout << "insert 5 elems in the middle" << std::endl;
	start_s = clock();
	tmp2.insert(it, 5, 30);
	stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp2);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void	vect_insert_many_elems_str(Container c)
{
	c.push_back("Bonjour");
	c.push_back("Je suis le Bonheur");
	c.push_back("Quand le code marche bien");
	c.push_back("Je pete");
	std::cout << "Vector elements before insert:" << std::endl;
	print_vector(c);
	Container tmp = c;
	typename Container::iterator	it = tmp.begin();
	std::cout << "insert 5 elems at the beginning" << std::endl;
	int start_s = clock();
	tmp.insert(it, 5, "LOL");
	int stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp1 = c;
	it = tmp1.end();
	std::cout << "insert 5 elems at the end" << std::endl;
	start_s = clock();
	tmp1.insert(it, 5, "LOL");
	stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp1);
		std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp2 = c;
	it = tmp2.begin()++;
	std::cout << "insert 5 elems in the middle" << std::endl;
	start_s = clock();
	tmp2.insert(it, 5, "LOL");
	stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp2);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void	vect_insert_range_int(Container c)
{
	c.push_back(42);
	c.push_back(10);
	c.push_back(23);
	c.push_back(-10);
	std::cout << "Vector elements before insert:" << std::endl;
	print_vector(c);
	Container tmp = c;
	std::cout << "Reinsert table elements in it using insert with iterators range at beginning:" << std::endl;
	typename Container::iterator	it = tmp.begin();
	int start_s = clock();
	tmp.insert(it, c.begin(), c.end());
	int stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp1 = c;
	it = tmp1.end();
	std::cout << "Reinsert table elements in it using insert with iterators range at end:" << std::endl;
	start_s = clock();
	tmp1.insert(it, c.begin(), c.end());
	stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp1);
		std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp2 = c;
	it = tmp2.begin()++;
	std::cout << "Reinsert table elements in it using insert with iterators range in the middle:" << std::endl;
	start_s = clock();
	tmp2.insert(it, c.begin(), c.end());
	stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp2);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void	vect_insert_range_str(Container c)
{
	c.push_back("Bonjour");
	c.push_back("Je suis le Bonheur");
	c.push_back("Quand le code marche bien");
	c.push_back("Je pete");
	std::cout << "Vector elements before insert:" << std::endl;
	print_vector(c);
	Container tmp = c;
	std::cout << "Reinsert table elements in it using insert with iterators range at beginning:" << std::endl;
	typename Container::iterator	it = tmp.begin();
	int start_s = clock();
	tmp.insert(it, c.begin(), c.end());
	int stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp1 = c;
	it = tmp1.end();
	std::cout << "Reinsert table elements in it using insert with iterators range at end:" << std::endl;
	start_s = clock();
	tmp1.insert(it, c.begin(), c.end());
	stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp1);
		std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp2 = c;
	it = tmp2.begin() + 2;
	std::cout << "Reinsert table elements in it using insert with iterators range in the middle:" << std::endl;
	start_s = clock();
	tmp2.insert(it, c.begin(), c.end());
	stop_s = clock();
	std::cout << "Vector elements after insert:" << std::endl;
	print_vector(tmp2);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void	vect_erase_range_str(Container c)
{
	c.push_back("Bonjour");
	c.push_back("Je suis le Bonheur");
	c.push_back("Quand le code marche bien");
	c.push_back("Je pete");
	std::cout << "Vector elements before erase:" << std::endl;
	print_vector(c);
	Container tmp = c;
	std::cout << "Erase all elements:" << std::endl;
	int start_s = clock();
	tmp.erase(tmp.begin(), tmp.end());
	int stop_s = clock();
	std::cout << "Vector elements after erase:" << std::endl;
	print_vector(tmp);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp1 = c;
	std::cout << "Erase one element in the beginning:" << std::endl;
	start_s = clock();
	tmp1.erase(tmp.begin(), tmp.begin()++);
	stop_s = clock();
	std::cout << "Vector elements after erase:" << std::endl;
	print_vector(tmp1);
		std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp2 = c;
	std::cout << "Erase one element at the end:" << std::endl;
	start_s = clock();
	tmp2.erase(c.end()--, c.end());
	stop_s = clock();
	std::cout << "Vector elements after erase:" << std::endl;
	print_vector(tmp2);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void	vect_erase_range_int(Container c)
{
	c.push_back(10);
	c.push_back(42);
	c.push_back(-20);
	c.push_back(101);
	std::cout << "Vector elements before erase:" << std::endl;
	print_vector(c);
	Container tmp = c;
	std::cout << "Erase all elements:" << std::endl;
	int start_s = clock();
	tmp.erase(tmp.begin(), tmp.end());
	int stop_s = clock();
	std::cout << "Vector elements after erase:" << std::endl;
	print_vector(tmp);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	std::cout << "Erase one element in the beginning:" << std::endl;
	start_s = clock();
	tmp.erase(tmp.begin(), tmp.begin()++);
	stop_s = clock();
	std::cout << "Vector elements after erase:" << std::endl;
	print_vector(tmp);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	std::cout << "Erase one element at the end:" << std::endl;
	start_s = clock();
	tmp.erase(tmp.end());
	stop_s = clock();
	std::cout << "Vector elements after erase:" << std::endl;
	print_vector(tmp);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void	vect_erase_one_elem_str(Container c)
{
	c.push_back("Bonjour");
	c.push_back("Je suis le Bonheur");
	c.push_back("Quand le code marche bien");
	c.push_back("Je pete");
	std::cout << "Vector elements before erase:" << std::endl;
	print_vector(c);
	Container tmp = c;
	std::cout << "Erase one element in the beginning:" << std::endl;
	int	start_s = clock();
	tmp.erase(tmp.begin());
	int	stop_s = clock();
	std::cout << "Vector elements after erase:" << std::endl;
	print_vector(tmp);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp1 = c;
	std::cout << "Erase one element at the end:" << std::endl;
	start_s = clock();
	tmp1.erase(--tmp1.end());
	stop_s = clock();
	std::cout << "Vector elements after erase:" << std::endl;
	print_vector(tmp1);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void	vect_erase_one_elem_int(Container c)
{
	c.push_back(10);
	c.push_back(42);
	c.push_back(-20);
	c.push_back(101);
	std::cout << "Vector elements before erase:" << std::endl;
	print_vector(c);
	Container tmp = c;
	std::cout << "Erase one element in the beginning:" << std::endl;
	int	start_s = clock();
	tmp.erase(tmp.begin());
	int	stop_s = clock();
	std::cout << "Vector elements after erase:" << std::endl;
	print_vector(tmp);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	Container tmp1 = c;
	std::cout << "Erase one element at the end:" << std::endl;
	start_s = clock();
	tmp1.erase(--tmp1.end());
	stop_s = clock();
	std::cout << "Vector elements after erase:" << std::endl;
	print_vector(tmp1);
	std::cout << "execution time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
}

template <class Container>
void	vect_reverse_iterators_and_bracks(Container c)
{
	c.push_back(10);
	c.push_back(42);
	c.push_back(-20);
	c.push_back(101);
	std::cout << "Showing vectors content using reverse iterator: " << std::endl;
	for (typename Container::reverse_iterator it = c.rbegin(); it != c.rend(); ++it)
		std::cout << *it << " |";
	std:: cout << std::endl;
	std::cout << "Showing vectors content using brackets: " << std::endl;
	for (typename Container::size_type i = 0; i < c.size(); i++)
		std::cout << c[i] << " |";
	std:: cout << std::endl;
}

template <class Container>
void	vector_non_member_operators(Container c)
{
	c.push_back(10);
	c.push_back(42);
	c.push_back(44);
	Container	tmp = c;
	
	std::cout << "Test when container 1 == container 2" << std::endl;
	std::cout << "container 1 != container 2 : " << (c != tmp) << std::endl;
	std::cout << "container 1 == container 2 : " << (c == tmp) << std::endl;
	std::cout << "container 1 <= container 2 : " << (c <= tmp) << std::endl;
	std::cout << "container 1 < container 2 : " << (c < tmp) << std::endl;
	std::cout << "container 1 >= container 2 : " << (c >= tmp) << std::endl;
	std::cout << "container 1 > container 2 : " << (c > tmp) << std::endl;
	c.push_back(2);
	std::cout << "Test when container 1 > container 2" << std::endl;
	std::cout << "container 1 != container 2 : " << (c != tmp) << std::endl;
	std::cout << "container 1 == container 2 : " << (c == tmp) << std::endl;
	std::cout << "container 1 <= container 2 : " << (c <= tmp) << std::endl;
	std::cout << "container 1 < container 2 : " << (c < tmp) << std::endl;
	std::cout << "container 1 >= container 2 : " << (c >= tmp) << std::endl;
	std::cout << "container 1 > container 2 : " << (c > tmp) << std::endl;
	c.pop_back();
	c.pop_back();
	std::cout << "Test when container 1 < container 2" << std::endl;
	std::cout << "container 1 != container 2 : " << (c != tmp) << std::endl;
	std::cout << "container 1 == container 2 : " << (c == tmp) << std::endl;
	std::cout << "container 1 <= container 2 : " << (c <= tmp) << std::endl;
	std::cout << "container 1 < container 2 : " << (c < tmp) << std::endl;
	std::cout << "container 1 >= container 2 : " << (c >= tmp) << std::endl;
	std::cout << "container 1 > container 2 : " << (c > tmp) << std::endl;
}


void	vectors_test_int()
{
	std::vector<int>	std_vector;
	ft::vector<int>		ft_vector;
	std::cout << "--------------------VECTORS TEST---------------------" << std::endl;

	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_push_back_one_element<std::vector<int>, int>(std_vector, 42);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_push_back_one_element<ft::vector<int>, int>(ft_vector, 42);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_push_back_many_elements_int<std::vector<int> >(std_vector, 100);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_push_back_many_elements_int<ft::vector<int> >(ft_vector, 100);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_push_back_many_elements_int<std::vector<int> >(std_vector, 100000);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_push_back_many_elements_int<ft::vector<int> >(ft_vector, 100000);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_pop_back_one_element_int<std::vector<int> >(std_vector);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_pop_back_one_element_int<ft::vector<int> >(ft_vector);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_insert_one_elem_int<std::vector<int> >(std_vector);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_insert_one_elem_int<ft::vector<int> >(ft_vector);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_insert_many_elems_int<std::vector<int> >(std_vector);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_insert_many_elems_int<ft::vector<int> >(ft_vector);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_insert_range_int<std::vector<int> >(std_vector);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_insert_range_int<ft::vector<int> >(ft_vector);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_erase_one_elem_int<std::vector<int> >(std_vector);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_erase_one_elem_int<ft::vector<int> >(ft_vector);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_reverse_iterators_and_bracks<std::vector<int> >(std_vector);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_reverse_iterators_and_bracks<ft::vector<int> >(ft_vector);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vector_non_member_operators<std::vector<int> >(std_vector);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vector_non_member_operators<ft::vector<int> >(ft_vector);
}

void	vectors_test_str()
{
	std::vector<std::string>	std_vector;
	ft::vector<std::string>		ft_vector;

	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_push_back_one_element<std::vector<std::string>, std::string>(std_vector, "Hello");
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_push_back_one_element<ft::vector<std::string>, std::string>(ft_vector, "Hello world");
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_push_back_many_elements_str<std::vector<std::string> >(std_vector, 1000);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_push_back_many_elements_str<ft::vector<std::string> >(ft_vector, 1000);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_push_back_many_elements_str<std::vector<std::string> >(std_vector, 100000);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_push_back_many_elements_str<ft::vector<std::string> >(ft_vector, 100000);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_pop_back_one_element_str<std::vector<std::string> >(std_vector);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_pop_back_one_element_str<ft::vector<std::string> >(ft_vector);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_insert_one_elem_str<std::vector<std::string> >(std_vector);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_insert_one_elem_str<ft::vector<std::string> >(ft_vector);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_insert_many_elems_str<std::vector<std::string> >(std_vector);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_insert_many_elems_str<ft::vector<std::string> >(ft_vector);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_insert_range_str<std::vector<std::string> >(std_vector);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_insert_range_str<ft::vector<std::string> >(ft_vector);
	std::cout << "+++++++++++++++++++++++STD+++++++++++++++++++++++++++" << std::endl;
	vect_erase_one_elem_str<std::vector<std::string> >(std_vector);
	std::cout << "+++++++++++++++++++++++FT++++++++++++++++++++++++++++" << std::endl;
	vect_erase_one_elem_str<ft::vector<std::string> >(ft_vector);
}

int     main()
{
	srand((unsigned int)time(0));
	std::cout << "================FT_CONTAINERS TESTER=================" << std::endl;
	vectors_test_int();
	vectors_test_str();
	// stack_tests();
	// map_tests();
		
	return (0);
}