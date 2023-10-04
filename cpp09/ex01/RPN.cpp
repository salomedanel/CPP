/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:17:04 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/04 10:57:49 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &src) {
    *this = src;
}

RPN &RPN::operator=(RPN const &src) {
    if (this != &src)
        _stack = src._stack;
    return (*this);
}

RPN::~RPN() {}

// parsing rules
// string doit contenir que des nb (0123456789) des espaces ou des operateurs (+-*/)