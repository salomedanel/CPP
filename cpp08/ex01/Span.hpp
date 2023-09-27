/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:06:59 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/27 12:13:41 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

class Span {
    private:
        unsigned int _n;
        std::vector <int> _tab;
        Span();

    public:
        Span(unsigned int n);
        Span(const Span &src);
        Span &operator=(const Span &src);
        ~Span();

        //getter
        unsigned int getN() const;
        std::vector <int> getTab() const;
        
        // methods
        void addNumber(int i);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        //exceptions
        class SpanFullException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class SpanException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, const Span &src);

#endif