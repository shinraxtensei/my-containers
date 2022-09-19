/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:34:20 by ahouari           #+#    #+#             */
/*   Updated: 2022/09/19 15:34:21 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./containers/vector.hpp"
#include <iostream>
#include <vector>
int main ()
{
    ft::vector<int> v(5 , 69);
    ft::vector<int>::iterator it;
    ft::vector<int>::reverse_iterator rit = v.rbegin();
    it = v.begin();
    while (it != v.end())
    {
        std::cout << *it << std::endl;
        ++it;
    }


}