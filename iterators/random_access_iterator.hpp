/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_access_iterator.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:34:15 by ahouari           #+#    #+#             */
/*   Updated: 2022/09/19 15:34:16 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include "iterator_traits.hpp"


namespace ft
{
	template <class T,
			class Category = ft::random_access_iterator_tag,
			class Distance = ptrdiff_t,
			class Pointer = T*,
			class Reference = T&>
	class random_access_iterator : ft::iterator<T, ft::random_access_iterator_tag>
	{

		public:
			typedef T			value_type;
			typedef Distance	difference_type;
			typedef Pointer		pointer;
			typedef Reference	reference;
			typedef Category	iterator_category;

		private:
			pointer	_itr;


	    public:
			
			random_access_iterator (void) {}
			random_access_iterator (pointer x) : _itr(x) {}
			random_access_iterator (const random_access_iterator &src) : _itr(src._itr) {}
			~random_access_iterator (void) {}



			random_access_iterator	&operator=	(const random_access_iterator &rhs)
			{
				_itr = rhs._itr;
				return (*this);
			}

			reference		operator*   (void) const {return (*_itr);}

			pointer 		operator->	(void) const {return (_itr);}

			reference		operator[] (difference_type n) const {return (_itr[n]);}


			difference_type operator- (const random_access_iterator &rhs) const {return (_itr - rhs._itr);}
			difference_type operator+ (const random_access_iterator &rhs) const {return (_itr + rhs._itr);}

			random_access_iterator	&operator++	(void)
			{
				_itr++;
				return(*this);
			}

			random_access_iterator	&operator--	(void)
			{
				_itr--;
				return(*this);
			}

			random_access_iterator	operator++	(int)
			{
				random_access_iterator tmp(*this);
				_itr++;
				return(tmp);
			}

			random_access_iterator	operator--	(int)
			{
				random_access_iterator tmp(*this);
				_itr--;
				return(tmp);
			}

			random_access_iterator	&operator+=	(const difference_type &offset)
			{
				_itr += offset;
				return (*this);
			}
			random_access_iterator	&operator-=	(const difference_type &offset)
			{
				_itr -= offset;
				return (*this);
			}
			random_access_iterator	operator+	(difference_type offset) const
			{
				random_access_iterator tmp(*this);
				tmp += offset;
				return (tmp);
			}
			random_access_iterator	operator-	(difference_type offset) const
			{
				random_access_iterator tmp(*this);
				tmp -= offset;
				return (tmp);
			}

			operator random_access_iterator<const T> (void) const
			{
				return (random_access_iterator<const T>(_itr));
			}



			bool	operator==(const random_access_iterator& rhs) const { return _itr ==&(*rhs); }
			bool	operator!=(const random_access_iterator& rhs) const { return _itr !=&(*rhs); }
			bool	operator<(const random_access_iterator& rhs) const { return _itr <&(*rhs); }
			bool	operator>(const random_access_iterator& rhs) const { return _itr >&(*rhs); }
			bool	operator<=(const random_access_iterator& rhs) const { return _itr <=&(*rhs); }
			bool	operator>=(const random_access_iterator& rhs) const { return _itr >=&(*rhs); }
	};

	// template <class InputIterator, class Distance>
	// void advance (InputIterator& it, Distance n)
	// {
	// 	it += n;
	// }
} // namespace ft

