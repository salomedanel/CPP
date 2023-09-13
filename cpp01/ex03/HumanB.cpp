/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:55:09 by sdanel            #+#    #+#             */
/*   Updated: 2023/08/22 11:44:16 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
    return ;
} 

HumanB::~HumanB()
{
    return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack(void) const
{
    if (this->_weapon != NULL && this->_weapon->getType() != "")
        std::cout << _name << " attack with their" << this->_weapon->getType() << std::endl;
    else
        std::cout << _name << " have no weapon" << std::endl;
    
}
