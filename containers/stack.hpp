/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:59:51 by ahouari           #+#    #+#             */
/*   Updated: 2022/09/21 15:20:22 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "vector.hpp"

namespace ft
{
    template <class T, class Container = ft::vector<T> >
    class stack
    {
        public:
            typedef Container container_type;
            typedef typename container_type::value_type value_type;
            typedef typename container_type::size_type size_type;
        protected:
            container_type c;

        public:

            // constructors
            

            explicit stack( const container_type& _container = container_type()) : c(_container) {}

            stack (const stack& rhs) : c(rhs.c) {}

            ~stack() {}

            stack& operator= (const stack& rhs)
            {
                this->c = rhs.c;
                return (*this);
            }

            bool empty () const
            {
                return (c.empty());
            }

            size_type size() const
            {
                return (c.size());
            }

            value_type& top()
            {
                return (c.back());
            } 
   
            value_type& top() const
            {
                return (c.back());
            }

            void push (const value_type& value)
            {
                return (c.push_back(value));
            }

            void pop()
            {
                return (c.pop_back());
            }

            void swap (stack& x) 
            {
                c.swap(x);
            }



            friend bool operator== (const stack<T ,Container>& lhs,const stack<T ,Container>& rhs) {return (lhs.c == rhs.c) ;}

            friend bool operator!= (const stack<T ,Container>& lhs,const stack<T ,Container>& rhs) {return (lhs.c != rhs.c) ;}

            friend bool operator< (const stack<T ,Container>& lhs,const stack<T ,Container>& rhs) {return (lhs.c < rhs.c) ;}
            
            friend bool operator> (const stack<T ,Container>& lhs,const stack<T ,Container>& rhs) {return (lhs.c > rhs.c) ;}
            
            friend bool operator<= (const stack<T ,Container>& lhs,const stack<T ,Container>& rhs) { return (lhs.c <= rhs.c) ;}

            friend bool operator>= (const stack<T ,Container>& lhs,const stack<T ,Container>& rhs) {return (lhs.c >= rhs.c) ;}
    };
};