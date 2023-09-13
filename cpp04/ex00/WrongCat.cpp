/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:53:02 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/04 13:58:25 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
    std::cout << this->_type << " copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    std::cout << this->_type << " assignation operator called" << std::endl;
    if (this != &src)
        this->_type = src._type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    WrongAnimal::makeSound();
    //std::cout << "Wrong miaouuuu" << std::endl;
}
