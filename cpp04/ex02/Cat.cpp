/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:41:52 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/01 17:14:38 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << this->_type << " constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << this->_type << " destructor called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Miaouuuu" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    *this = src;
}

Cat& Cat::operator=(const Cat &src)
{
    if (this != &src)
    {
        this->_type = src._type;
        this->_brain = new Brain(*src._brain);
    }
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}