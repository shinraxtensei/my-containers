/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:34:17 by ahouari           #+#    #+#             */
/*   Updated: 2022/12/02 09:40:06 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef REVERSE_ITERATOR_HPP
# define REVERSE_ITERATOR_HPP

#include "iterator_traits.hpp"
#include "random_access_iterator.hpp"

namespace ft
{
	template< class Iter >
	struct const_reverse_iterator;

	template <class Iterator>
	class reverse_iterator
	{
		public:

			typedef	Iterator	iterator_type;
			typedef typename iterator_traits<Iterator>::iterator_category iterator_category;;
			typedef typename iterator_traits<Iterator>::value_type value_type;
			typedef typename iterator_traits<Iterator>::difference_type difference_type;
			typedef typename iterator_traits<Iterator>::pointer pointer;
			typedef typename iterator_traits<Iterator>::reference reference;

			iterator_type	current;

        public:
			reverse_iterator() : current() {}

			reverse_iterator (iterator_type it) : current(it) {}

			template <class Iter>
			reverse_iterator (const reverse_iterator<Iter>& rev_it) {current = rev_it.current;}

			iterator_type base() const {return (current);}
			
			reference operator*() const
			{
				iterator_type tmp = current;
				return (*--tmp);
			}

			reverse_iterator operator+ (difference_type n) const {return (reverse_iterator(current - n));}
			reverse_iterator operator- (difference_type n) const {return (reverse_iterator(current + n));}

			reverse_iterator& operator++()
			{
				--current;
				return(*this);
			}
			reverse_iterator  operator++(int)
			{
				reverse_iterator temp = *this;
				++(*this);
				return temp;	
			}
			reverse_iterator& operator+= (difference_type n){
				current -= n;
				return (*this);
			}
			reverse_iterator& operator--()
			{
				++current;
				return(*this);
			}
			reverse_iterator  operator--(int){
				reverse_iterator temp = *this;
				--(*this);
				return temp;
			}
			reverse_iterator& operator-= (difference_type n){
				current += n;
				return (*this);
			}
			pointer operator->() const{
				return &(operator*());
			}
			reference operator[] (difference_type n) const{
				return (current[-n-1]);
			}

			operator const_reverse_iterator<Iterator>() const
			{
				return (const_reverse_iterator<Iterator>(current));
			}
		};

		template <class Iterator, class OtherIterator>
		typename reverse_iterator<Iterator>::difference_type operator -
		(const reverse_iterator<Iterator>& lhs, const reverse_iterator<OtherIterator>& rhs)
		{
			return (rhs.base() - lhs.base());
		}

		template <class Iterator, class OtherIterator>
		bool operator== (const reverse_iterator<Iterator>& lhs,
						const reverse_iterator<OtherIterator>& rhs)
		{
			return (lhs.base() == rhs.base());
		}

		template <class Iterator, class OtherIterator>
		bool operator!= (const reverse_iterator<Iterator>& lhs,
						const reverse_iterator<OtherIterator>& rhs)
		{
			return (lhs.base() != rhs.base());
		}

		template <class Iterator, class OtherIterator>
		bool operator<  (const reverse_iterator<Iterator>& lhs,
						const reverse_iterator<OtherIterator>& rhs)
		{
			return (lhs.base() > rhs.base());
		}

		template <class Iterator, class OtherIterator>
		bool operator<= (const reverse_iterator<Iterator>& lhs,
						const reverse_iterator<OtherIterator>& rhs)
		{
			return (lhs.base() >= rhs.base());
		}

		template <class Iterator, class OtherIterator>
		bool operator>  (const reverse_iterator<Iterator>& lhs,
						const reverse_iterator<OtherIterator>& rhs)
		{
			return (lhs.base() < rhs.base());
		}

		template <class Iterator, class OtherIterator>
		bool operator>= (const reverse_iterator<Iterator>& lhs,
						const reverse_iterator<OtherIterator>& rhs)
		{
			return (lhs.base() <= rhs.base());
		}
} 

#endif