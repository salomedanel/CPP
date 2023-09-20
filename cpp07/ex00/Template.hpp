/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:40:03 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/20 13:52:30 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>

template <typename T> // indique au compilateur qu'on veut faire une fonction generique (on declare un type de variable qui peut etre n'importe quoi: T)

T max(T &a, T &b)
{
    if (a > b)
        return a;
    return b;
}

template <typename T>

T min(T &a, T &b)
{
    if (a < b)
        return a;
    return b;
}

template <typename T>

void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
    return ;
}

#endif