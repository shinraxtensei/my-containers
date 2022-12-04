/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_traits.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:34:13 by ahouari           #+#    #+#             */
/*   Updated: 2022/12/02 09:35:38 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITERATOR_TRAITS_HPP
# define ITERATOR_TRAITS_HPP


#include <cstddef>
#include <iterator>

namespace ft
{

	struct input_iterator_tag {};
	struct output_iterator_tag {};
	struct forward_iterator_tag : public input_iterator_tag {};
	struct bidirectional_iterator_tag : public forward_iterator_tag {};
	struct random_access_iterator_tag : public bidirectional_iterator_tag {};

	template <class Iter>
	class iterator_traits
	{
		public :
			typedef typename Iter::difference_type		difference_type;
			typedef typename Iter::value_type			value_type;
			typedef typename Iter::pointer				pointer;
			typedef typename Iter::reference			reference;
			typedef typename Iter::iterator_category	iterator_category;
	};

	template <class T>
	class iterator_traits<T*>
	{
		public :
			typedef ptrdiff_t						difference_type;
			typedef T								value_type;
			typedef T*								pointer;

			typedef T&								reference;
			typedef random_access_iterator_tag		iterator_category;
	};

	template <class T> 
	class iterator_traits<const T*>
	{
		public :
			typedef ptrdiff_t						difference_type;
			typedef T								value_type;
			typedef const T*						pointer;
			typedef const T&						reference;
			typedef random_access_iterator_tag		iterator_category;
	};

	template <class T,
		class Category,
		class Distance = ptrdiff_t,
		class Pointer = T*,
		class Reference = T&>
	struct iterator
	{
			typedef T			value_type;
			typedef Distance	difference_type;
			typedef Pointer		pointer;
			typedef Reference	reference;
			typedef Category	iterator_category;
	};







	template<class It>
	typename ft::iterator_traits<It>::difference_type 
	do_distance(It first, It last, ft::input_iterator_tag)
	{
		typename ft::iterator_traits<It>::difference_type result = 0;
		while (first != last) {
			++first;
			++result;
		}
		return result;
	}
 
	template<class It>
	typename ft::iterator_traits<It>::difference_type 
	do_distance(It first, It last, ft::random_access_iterator_tag)
	{
		return (last - first);
	}

	template<class It>
	typename ft::iterator_traits<It>::difference_type 
	do_distance(It first, It last, std::input_iterator_tag)
	{
		typename ft::iterator_traits<It>::difference_type result = 0;
		while (first != last) {
			++first;
			++result;
		}
		return result;
	}
 
	template<class It>
	typename ft::iterator_traits<It>::difference_type 
	do_distance(It first, It last, std::random_access_iterator_tag)
	{
		return (last - first);
	}


template<class It>
typename ft::iterator_traits<It>::difference_type 
	distance(It first, It last)
{
	return ft::do_distance(first, last, typename ft::iterator_traits<It>::iterator_category());
}



}
#endif