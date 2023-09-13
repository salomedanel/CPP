/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:46:10 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/04 13:40:59 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
    std::cout << this->_type << " copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout << this->_type << " assignation operator called" << std::endl;
    if (this != &src)
        this->_type = src._type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Wouuuuf" << std::endl;
}