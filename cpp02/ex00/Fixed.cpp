/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:36:24 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/12 11:17:58 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _fixedpoint = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(copy.getRawBits());
   //_fixedpoint = copy._fixedpoint;
}

Fixed& Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &copy)
       this->_fixedpoint = copy.getRawBits(); // on utilise getRawBits() pour acceder a la valeur brute de l'objet copy. On pourrait ecrire juste this->_fixedpoint = copy._fixedpoint, mais si on modifie la logique de getRawBits(), on n'aura pas a modifier l'operateur d'affectation.
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const // permet d'afficher la valeur brute du point fixe
{
    std::cout << "getRawBits function called" << std::endl;
    return this->_fixedpoint;   
}

void    Fixed::setRawBits(int const raw) // permet de modifier la valeur brute du point fixe
{
    this->_fixedpoint = raw;
}