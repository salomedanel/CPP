/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:24:13 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/12 13:43:15 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    
    private:
        int                _fixedpoint;
        static const int    _bits = 8;
        
    public:
    Fixed(void);
    Fixed(const int i);
    Fixed(const float i);
    Fixed(const Fixed &src);
    Fixed& operator=(const Fixed &src);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int   toInt(void) const;

    bool    operator>(const Fixed &src) const ;
    bool    operator<(const Fixed &src) const ;
    bool    operator>=(const Fixed &src) const ;
    bool    operator<=(const Fixed &src) const ;
    bool    operator==(const Fixed &src) const ;
    bool    operator!=(const Fixed &src) const ;
    
    Fixed   operator+(const Fixed &src) const ;
    Fixed   operator-(const Fixed &src) const ;
    Fixed   operator*(const Fixed &src) const ;
    Fixed   operator/(const Fixed &src) const ;
    
    Fixed&   operator++(void); // prefix - incremente this (l'objet actuel et renvoie une ref)
    Fixed    operator++(int); // postfix - renvoie une copie avant d'incrementer
    Fixed&   operator--(void);
    Fixed    operator--(int);
    
    static Fixed& min (Fixed &a, Fixed &b);
    static const Fixed& min (const Fixed &a, const Fixed &b);
    static Fixed& max (Fixed &a, Fixed &b);
    static const Fixed& max (const Fixed &a, const Fixed &b);
};

std::ostream & operator<<(std::ostream &o, Fixed const &i);

#endif 
