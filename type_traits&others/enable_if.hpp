/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enable_if.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:02:42 by ahouari           #+#    #+#             */
/*   Updated: 2022/09/19 17:02:43 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


namespace ft
{
    template<bool B, class T = void>
    struct enable_if {};

    template <class T>
    struct enable_if<true, T> {typedef T type;} ;

} ;