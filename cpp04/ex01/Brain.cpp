/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:43:12 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/01 16:54:04 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructed" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructed" << std::endl;
}

Brain::Brain (const Brain &src)
{
    *this = src;
}

Brain& Brain::operator=(const Brain &src)
{
    if (this != &src)
        for (int i = 0; i < 100; i++) {
            this->_ideas[i] = src._ideas[i];
        }
    
    std::cout << "Brain assignment operator called" << std::endl;
    
    return *this;
}