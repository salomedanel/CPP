/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:46:10 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/01 17:15:52 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << this->_type << " constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Wouuuuf" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
    *this = src;
}

Dog& Dog::operator=(const Dog &src)
{
    if (this != &src)
    {
        this->_type = src._type;
        this->_brain = new Brain(*src._brain);
    }
    std::cout << "Dog assignment operator called" << std::endl;
    return *this;
}