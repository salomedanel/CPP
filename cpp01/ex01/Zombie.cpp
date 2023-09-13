/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:54:53 by sdanel            #+#    #+#             */
/*   Updated: 2023/08/20 13:43:53 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Zombie")
{
   return ;
}

Zombie::Zombie(std::string name) : _name(name)
{
   return ;
}

Zombie::~Zombie()
{
    std::cout << _name << " has been destroyed" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

void    Zombie::setName(std::string name)
{
    _name = name;
}