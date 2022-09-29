/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:34:08 by ahouari           #+#    #+#             */
/*   Updated: 2022/09/29 09:37:06 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory>
#include <algorithm>
#include <stdexcept>

#include "../iterators/iterator_traits.hpp"
#include "../iterators/random_access_iterator.hpp"
#include "../iterators/reverse_iterator.hpp"

#include "../type_traits.../enable_if.hpp"
#include "../type_traits.../is_ingeral.hpp"
#include "../type_traits.../lexicographical&&comp.hpp"
#include "../type_traits.../pair.hpp"

namespace ft
{
    template <class T, class Allocator = std::allocator<T> >
    class vector
    {
        public:
            typedef T value_type;
            typedef Allocator allocator_type;
            typedef typename allocator_type::reference reference;
            typedef typename allocator_type::const_reference const_reference;
            typedef typename allocator_type::pointer pointer;
            typedef typename allocator_type::const_pointer const_pointer;
            typedef typename ft::random_access_iterator<value_type> iterator;
            typedef typename ft::random_access_iterator<const value_type> const_iterator;
            typedef typename ft::reverse_iterator<iterator> reverse_iterator;
            typedef typename ft::reverse_iterator<const_iterator> const_reverse_iterator;
            typedef ptrdiff_t difference_type;
            typedef size_t size_type;
            
        private:
            pointer _array;
            size_type _size;
            size_type _capacity;
            allocator_type _allocator;

        public:
            // *******************************//
            //    Constructor/Destructor //
            // *******************************//

            // default

            explicit vector(const allocator_type & alloc = allocator_type()): 
                _array(NULL), _size(0), _capacity(0), _allocator(alloc)
            {
                _array = _allocator.allocate(_capacity);
            }

            // fill

            explicit vector (size_type n , const value_type& val = value_type() , const Allocator& alloc = allocator_type()) :
            _array(NULL) , _size(n), _capacity(n) , _allocator(alloc)
            
            {
                _array  = _allocator.allocate(_capacity);
                for (size_type i = 0; i < _capacity; ++i)
                    _allocator.construct(_array+i , val);
            }
            
            // range
            template <class InputIterator>
            vector(InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type(),
            typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type = InputIterator()) 
            : _array(NULL), _size(last - first), _capacity(_size) ,  _allocator(alloc)
            {
                _array = _allocator.allocate(_capacity);
                for (size_type i = 0; i < _size; ++i , ++first)
                    _allocator.construct(_array + i , *first);
            }

            // copy

            vector (const vector& rhs)
            : _array(NULL), _size(rhs._size), _capacity(rhs._capacity), _allocator(rhs._allocator)
            {
                _array = _allocator.allocate(_capacity);
                for (size_type i =0; i < _size; i++)
                    _allocator.construct(_array + i , rhs._array[i]);
            }


            // destruct


            ~vector(void)
            {
                for (size_type i = 0; i < _size; i++)
                    _allocator.destroy(_array + i);
                _allocator.deallocate(_array , _capacity);
            }


                /* ----------------------------------------------------------------*/
                /* -------------------------- iterators -------------------------*/
                /* ----------------------------------------------------------------*/

            iterator begin(void)
            {
                return (iterator(_array));
            }
            const_iterator begin(void) const{
                return (const_iterator(_array));
            }

            iterator end(void)
            {
                return (iterator(_array + _size ));
            }
            const_iterator end(void) const
            {
                return (const_iterator(_array + _size ));
            };

            reverse_iterator rbegin()
            {
                return (reverse_iterator(end()));
            }

            const_reverse_iterator rbegin(void) const
            {
                return (const_reverse_iterator(end()));
            }

            reverse_iterator rend()
            {
                return (reverse_iterator(begin()));
            }

            const_reverse_iterator rend(void) const
            {
                return (const_reverse_iterator(begin()));
            }


                /* ----------------------------------------------------------------*/
                /* -------------------------- CAPACITY -------------------------*/
                /* ----------------------------------------------------------------*/

            size_type size(void) const
            {
                return (_size);
            }

            size_type max_size() const
            {
                return (_allocator.max_size());
            }

            void resize (size_type n , value_type v = value_type())
            {
                if (n > _capacity)
                    reserve(std::max(_size * 2 , n));
                size_type i = n;
                while(i > _size)
                    _allocator.construct(_array + (--i), v);
                while(i < _size)
                    _allocator.destroy(_array + (i++));
                _size = n;
            }


            size_type capacity () const
            {
                return (_capacity);
            }

            bool empty () const
            {
                return (_size == 0);
            }

            void reserve (size_type n)
            {
                if (n > max_size())
                    throw std::out_of_range("vector::reserve");
                if (n < _capacity)
                    return;
                pointer ptr ;
                ptr = _allocator.allocate(n);
                for(size_type i = 0; i < _size; i++)
                {
                    _allocator.construct(ptr+i , _array[i]);
                    _allocator.destroy(_array + i);
                }
                _allocator.deallocate(_array , _capacity);
                _array  = ptr;
                _capacity = n;
            }

                /* ----------------------------------------------------------------*/
                /* -------------------------- element access -------------------------*/
                /* ----------------------------------------------------------------*/

            reference operator[] (size_type n)
            {
                return (_array[n]);
            }

            const_reference operator[] (size_type n) const
            {
                return (_array[n]);
            }

            reference at(size_type n)
            {
                if (n >= _size)
                    throw std::out_of_range("vector::at");
                return (_array[n]);
            }

            const_reference at(size_type n) const
            {
                if (n >= _size)
                    throw std::out_of_range("vector::at");
                return (_array[n]);
            }

            reference front(void)
            {
                return (_array[0]);
            }
            const_reference front(void) const
            {
                return (_array[0]);
            }
            
            reference back(void)
            {
                return (_array[_size - 1]);
            }

            const_reference back(void) const
            {
                return (_array[_size - 1]);
            }


                /* ----------------------------------------------------------------*/
                /* -------------------------- modifiers -------------------------*/
                /* ----------------------------------------------------------------*/

		    template <class InputIterator>
		    void assign (InputIterator first, InputIterator last,
			typename ft::enable_if<!ft::is_integral<InputIterator>::value,
			InputIterator>::type = InputIterator())
            {
                clear();
                size_type n = ft::distance(_array, _capacity);
                if (n > _capacity)
                {
                    _allocator.deallocate(_array , _capacity);
                    _array = _allocator.allocate(n);
                    _capacity = n;
                }
                size_type i = 0;
                for (; first != last ; ++first, ++i)
                    _allocator.construct(&_array[i] , *first);
                _size = i;
                
            }

            void assign( size_type n ,const value_type &v)
            {
                clear();

                if (n > _capacity)
                {
                    _allocator.deallocate(_array , _capacity);
                    _array = _allocator.allocate(n);
                    _capacity = n;
                }
                for (size_type i = 0; i <n ; ++i)
                    _allocator.construct(&_array[i], v);
                _size = n;
            }

            void push_back (const value_type& v)
            {
                insert(this->end() , v);
            }

            void pop_back ()
            {
                _allocator.destroy(_array + _size -1);
                _size--;
            }

            iterator insert (iterator position , const value_type& v)
            {
                size_type pos = ft::distance(begin() , position);
                insert(position ,1 ,v);
                return (iterator(_array + pos));
            }

            void insert (iterator position , size_type n , const value_type& v)
            {
                size_type pos = ft::distance(begin() , position);

                if (!n)
                    return;
                reserve(new_capacity(n));
                move_right(_array + pos + n , _array + pos , _size - pos);
                for (size_type i = 0; i < n; i++, pos++)
                    _allocator.construct(&_array[pos] , v);
                _size += n; 

            }

            template <class InputIterator>
            void insert(iterator position, InputIterator first, InputIterator last,
            typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type = InputIterator())
            {
                size_type n = ft::distance(first , last);
                size_type pos = ft::distance(begin(), position);

                reserve(new_capacity(n));
                move_right(_array + pos + n ,_array +pos ,_size - pos);
                for (;first != last; first++ , pos++)
                    _allocator.construct(&_array[pos] , *first);
                _size += n ; 
            }




            iterator erase(iterator position)
            {
                return (erase(position, position + 1));
            }

            iterator erase(iterator first , iterator last)
            {
                size_type offset;
                size_type start_index;
                size_type end_index;

                start_index = ft::distance(begin() , first);
                end_index = ft::distance(end()  , last);

                for(size_type i = start_index; i < end_index; i++)
                    _allocator.destroy(_array + i);
                offset = ft::distance(first , last);
                for(size_type i = end_index; i < _size ; i++)
                {
                    _allocator.construct(&_array[i - offset] , _array[i]);
                    _allocator.destroy(_array + i);
                }
                _size -= offset;
                return (first);
            }



            void swap(vector &rhs)
            {
                std::swap(_array , rhs._array);
                std::swap(_size , rhs._size);
                std::swap(_capacity , rhs._capacity);
                std::swap(_allocator , rhs._allocator);
            }


            void clear(void)
            {
                for(size_type i = 0; i < _size ; i++)
                    _allocator.destroy(_array + i);
                _size = 0;
            }

            allocator_type get_allocator(void) const
            {
                return (this->_allocator);
            }

            void move_right(pointer dest, pointer src , size_type n)
            {
                if (!_size)
                    return ;
                pointer stop = dest;
                src += n;
                dest += n;
                while(dest > stop)
                {
                    _allocator.construct(--dest , *--src);
                    _allocator.destroy(src);
                }
            }

            size_type new_capacity(size_type n)
            {
                if (_size + n > _capacity)
                    return (_size + std::max(_size ,n));
                return (0);
            }

    };     

                /* ----------------------------------------------------------------*/
                /* --------------------------relationals ops -------------------------*/
                /* ----------------------------------------------------------------*/


            template <class T , class Alloc>
            bool operator==(const vector<T , Alloc>& lhs , const vector<T, Alloc>& rhs)
            {
                if (lhs.size() != rhs.size())
                    return (false);
                return (ft::equal(lhs.begin(), lhs.end(), rhs.begin()));
            }

            template <class T , class Alloc>
            bool operator!=(const vector<T , Alloc>&lhs, const vector<T , Alloc>&rhs)
            {
                return (!(lhs == rhs));
            }

            template <class T , class Alloc>
            bool operator<(const vector<T , Alloc>&lhs, const vector<T , Alloc>&rhs)
            {
                return (ft::lexicographical_compare(lhs.begin(),lhs.end(),rhs.begin(),rhs.end()));
            }
            template <class T, class Alloc>
            bool operator<= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
            {
                return (!(rhs < lhs));
            }

            template <class T, class Alloc>
            bool operator>  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
            {
                return (rhs < lhs);
            }

            template <class T, class Alloc>
            bool operator>= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
            {
                return (!(lhs < rhs));
            }      

            template <class T, class Alloc>
            void swap (vector<T,Alloc>& x, vector<T,Alloc>& y)
            {
                x.swap(y);
            }      

};