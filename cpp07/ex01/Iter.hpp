/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:02:38 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/20 15:36:10 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>

void iter(T *array, int length, void (*f)(T const &))
{
    for (int i = 0; i < length; i++)
        f(array[i]);
}

template <typename T>

void printTab(T &elem)
{
    std::cout << elem << std::endl;
}

#endif