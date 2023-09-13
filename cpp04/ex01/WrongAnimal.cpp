/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:55:44 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/01 14:40:36 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal " << this->_type << " constructor called" << std::endl; 
}

WrongAnimal::~WrongAnimal()
{
    std::cout << this->_type << " destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &src)
        this->_type = src._type;
    return *this;
}

std::string    WrongAnimal::getType(void) const
{
    return this->_type;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal makeSound" << std::endl;
}