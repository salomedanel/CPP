/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:24:13 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/12 13:21:07 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    
    private:
        int                _fixedpoint;
        static const int    _bits = 8;
        
    public:
    Fixed(void);
    Fixed(const int i);
    Fixed(const float i);
    Fixed(const Fixed &copy);
    Fixed& operator=(const Fixed &copy);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int   toInt(void) const;
};

std::ostream & operator<<(std::ostream &o, Fixed const &f);

#endif 
