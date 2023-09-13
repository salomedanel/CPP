/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:55:44 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/01 15:19:46 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal " << this->_type << " constructor called" << std::endl; 
}

Animal::~Animal()
{
    std::cout << this->_type << " destructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal &Animal::operator=(const Animal &src)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &src)
        this->_type = src._type;
    return *this;
}

std::string    Animal::getType(void) const
{
    return this->_type;
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal makeSound" << std::endl;
}