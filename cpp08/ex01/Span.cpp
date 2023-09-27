/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:11:24 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/27 11:50:08 by sdanel           ###   ########.fr       */
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


//getter
unsigned int Span::getN() const {
    return _n;
}

std::vector <int> Span::getTab() const {
    return _tab;
}

//methods
void Span::addNumber(int i) {
    if (_tab.size() == getN())
        throw SpanFullException();
    _tab.push_back(i);
    std::cout << i << " added to the tab" << std::endl;
}

unsigned int Span::shortestSpan() {
    
    if (_tab.size() < 2)
        throw SpanException();
       
    int tmp = abs(_tab[0] - _tab[1]);
    for (unsigned int i = 0; i < _tab.size(); i++) {
        for (unsigned int j = 0; j < _tab.size(); j++) {
            if ((tmp > abs(_tab[i] - _tab[j]) && i != j))
                tmp = abs(_tab[i] - _tab[j]);
        }
    }
    return (tmp);
}

unsigned int Span::longestSpan() {
    if (_tab.size() < 2)
        throw SpanException();
       
    int tmp = abs(_tab[0] - _tab[1]);
    for (unsigned int i = 0; i < _tab.size(); i++) {
        for (unsigned int j = 0; j < _tab.size(); j++) {
            if ((tmp < abs(_tab[i] - _tab[j]) && i != j))
                tmp = abs(_tab[i] - _tab[j]);
        }
    }
    return (tmp);
}

//exceptions
const char* Span::SpanFullException::what() const throw() {
    return ("Too many elements in the tab");
}

const char* Span::SpanException::what() const throw() {
    return ("Not enough elements in the tab");
}


//overload
std::ostream &operator<<(std::ostream &o, const Span &src) {
    o << "N: " << src.getN() << std::endl;
    std::vector <int> tab = src.getTab();
    for (std::vector<int>::iterator it = tab.begin(); it != tab.end(); ++it)
        o << *it << std::endl;
    return o;
}