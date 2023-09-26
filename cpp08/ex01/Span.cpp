/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:11:24 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/26 17:31:56 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n) {
}

Span::~Span() {
}

Span::Span(const Span &src) {
    *this = src;
}

Span &Span::operator=(const Span &src) {
    if (this != &src)
    {
        _n = src._n;
        _tab = src._tab;
    }
    return *this;
}

void Span::addNumber(int i) {
    if (_tab.size() == n)
        throw SpanFullException();
    _tab.push_back(i);
    std::cout << i << " added to the tab" << std::endl;
}

const char* SpanFullException::what() const throw() {
    return ("Too many elements");
}