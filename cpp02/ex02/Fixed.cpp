/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:36:24 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/12 14:03:49 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fixedpoint(0)
{
  //  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) : _fixedpoint(i << _bits)
{
    //std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float i) : _fixedpoint(roundf(i * (1 << _bits)))
{
  //  std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
  //  std::cout << "src constructor called" << std::endl;
    *this = src;
}

Fixed& Fixed::operator=(const Fixed &src)
{
   // std::cout << "src assignement operator overload called" << std::endl;
    if (this != &src)
       this->_fixedpoint = src.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
  //  std::cout << "Destructor called" << std::endl;
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

std::ostream & operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}

// ----- comparaison -----

bool    Fixed::operator>(const Fixed &src) const {
    return this->getRawBits() > src.getRawBits();
} 

bool    Fixed::operator<(const Fixed &src) const {
    return this->getRawBits() < src.getRawBits();
}

bool    Fixed::operator>=(const Fixed &src) const {
    return this->getRawBits() >= src.getRawBits();
}
bool    Fixed::operator<=(const Fixed &src) const {
    return this->getRawBits() <= src.getRawBits();        
}

bool    Fixed::operator==(const Fixed &src) const {
    return this->getRawBits() == src.getRawBits();
}

bool    Fixed::operator!=(const Fixed &src) const {
    return this->getRawBits() != src.getRawBits();
}

// ----- arithmetic -----
    
Fixed   Fixed::operator+(const Fixed &src) const {
    return Fixed(this->toFloat() + src.toFloat());
}

Fixed   Fixed::operator-(const Fixed &src) const {
    return Fixed (this->toFloat() - src.toFloat());
}

Fixed   Fixed::operator*(const Fixed &src) const {
    return Fixed(this->toFloat() * src.toFloat());
}

Fixed   Fixed::operator/(const Fixed &src) const {
    return Fixed(this->toFloat() / src.toFloat());
}

// ----- increment/decrement -----
    
Fixed&   Fixed::operator++(void) {
    //std::cout << _fixedpoint << std::endl;
    ++this->_fixedpoint;
    //std::cout << _fixedpoint << std::endl;
    return *this;
}

Fixed    Fixed::operator++(int) {
    Fixed tmp(*this);
    tmp._fixedpoint = this->_fixedpoint++;
    return tmp;
} // convention de passer par une variable temporaire pour les post increment/decrement

Fixed&   Fixed::operator--(void) {
    --this->_fixedpoint;
    return *this;
}

Fixed    Fixed::operator--(int) {
    Fixed tmp(*this);
    tmp._fixedpoint = this->_fixedpoint--;
    return tmp;
} // convention de passer par une variable temporaire pour les post increment/decrement

// ----- min/max -----

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}