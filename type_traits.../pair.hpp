/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:02:53 by ahouari           #+#    #+#             */
/*   Updated: 2022/09/29 13:43:02 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace ft
{
    template <class T1 , class T2>
    struct pair
    {
        typedef T1 first_T;
        typedef T2 second_T;

        first_T first;
        second_T second;

        pair(void) : first(first_T()), second(second_T()) {}

        template <class A , class B>
        pair(const pair<A,B>& pr) : first(pr.first), second(pr.second) {}
        pair (const first_T &a , const second_T &b) : first(a), second(b) {}
        ~pair(void) {}


        pair& operator=(const pair& pr)
        {
            if (*this == pr)
                return *this;
            this->first = pr.first;
            this->second = pr.second;
            return *this;
        }
    };
        template <class T1 , class T2>
        bool operator== (const pair<T1, T2> &lhs, const pair<T1, T2> &rhs)
        {
            return (lhs.first == rhs.first && lhs.second == rhs.second);
        }

        template <class T1 , class T2>
        bool operator!= (const pair<T1, T2> &lhs, const pair<T1, T2> &rhs)
        {
            return (!lhs == rhs);
        }

        template <class T1 , class T2>
        bool operator< (const pair<T1, T2> &lhs, const pair<T1, T2> &rhs)
        {
            return lhs.first < rhs.first ||
            (!(rhs.first < lhs.first) && lhs.second < rhs.second);
        }
        template <class T1 , class T2>
        bool operator> (const pair<T1, T2> &lhs, const pair<T1, T2> &rhs)
        {
            return rhs < lhs;
        }

        template <class T1 , class T2>
        bool operator>= (const pair<T1, T2> &lhs, const pair<T1, T2> &rhs)
        {
            return !(lhs < rhs);
        }

        template <class T1 , class T2>
        bool operator<= (const pair<T1, T2> &lhs, const pair<T1, T2> &rhs)
        {
            return !(rhs < lhs);
        }

        template <class T1 , class T2>
        pair<T1,T2> make_pair(T1 x, T2 y)
        {
            return (pair<T1 , T2> (x,y));
        }
};