/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:09:25 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/20 17:00:58 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>

class Array {
    
    private:
        T *_array;
        unsigned int _length;
        
    public:
        Array(void) {
            _array = new T[0];
            _length = 0;
        }
        Array(unsigned int n) {
            _array = new T[n];
            _length = n;
        }
        Array(Array const &src) {
            _array = new T[src.size()];
            _length = src.size();
            for (unsigned int i = 0; i < _length; i++)
                _array[i] = src._array[i];
        }

        ~Array(void) {
            delete [] _array;
        }

        Array &operator=(Array const &src) {
            if (this != &src) {
                delete [] _array;
                _array = new T[src.size()];
                _length = src.size();
                for (unsigned int i = 0; i < _length; i++)
                    _array[i] = src._array[i];
            }
            return *this;
        }

        T &operator[](unsigned int i) const {
            if (i >= _length)
                throw OutOfBoundsException();
            return _array[i];
        }
        
        //getter
        unsigned int size(void) const {
            return _length;
        }

        //exception
        class OutOfBoundsException : public std::exception {
            public:
                virtual const char *what() const throw() {
                    return "Out of bounds";
                }
        };
};

template <typename T>
std::ostream &operator<<(std::ostream &o, const Array<T> &src) {
    for (unsigned int i = 0; i < src.size(); i++)
        o << src[i] << std::endl;
    return o;
}

#endif