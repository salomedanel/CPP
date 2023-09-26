/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:06:59 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/26 17:26:46 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
    private:
        unsigned int _n;
        std::vector <int> _tab;

    public:
        Span(unsigned int n);
        Span(const Span &src);
        Span &operator=(const Span &src);
        ~Span();

        void addNumber(int i);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        //exceptions
        class SpanFullException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

#endif