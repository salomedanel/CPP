/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:41:52 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/04 13:40:21 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << this->_type << " copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << this->_type << " assignation operator called" << std::endl;
    if (this != &src)
        this->_type = src._type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaouuuu" << std::endl;
}