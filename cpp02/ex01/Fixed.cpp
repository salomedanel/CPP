/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:36:24 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/12 13:26:07 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fixedpoint(0)
{
    std::cout << "Default constructor called" << std::endl;
    //this->_fixedpoint = 0;
}

Fixed::Fixed(const int i) : _fixedpoint(i << _bits) // 1 << 
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float i) : _fixedpoint(roundf(i * (1 << _bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy; // en copiant la valeur ainsi, le constructeur de copie cree un nouvel objet et utilise l'operateur d'assignation pour lui donner le meme valeur que l'objet initial.
   // this->setRawBits(copy.getRawBits());
}

Fixed& Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &copy)
       this->_fixedpoint = copy.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return this->_fixedpoint;   
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixedpoint = raw;
}

float Fixed::toFloat(void) const
{
   return static_cast<float>(this->getRawBits()) / (1 << _bits);
}

int Fixed::toInt(void) const
{
    return this->_fixedpoint >> _bits;
}

std::ostream & operator<<(std::ostream &o, Fixed const &f)
{
    o << f.toFloat(); // on utilise toFloat pour que ca fonctione avec les float comme avec les int
    return o;
}