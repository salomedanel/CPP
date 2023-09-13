/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:44:49 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/05 16:04:45 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
     ClapTrap::_name = name + "_clap_name";
     this->_name = name;

    this->_hit_points = FragTrap::_hit_points;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;

    std::cout << "[DiamondTrap] - " << this->_name << " constructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    std::cout << "[DiamondTrap] - " << this->_name << " copied" << std::endl;
    *this = src;
    return ;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    this->_name = src._name;
    this->_hit_points = src._hit_points;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    std::cout << "[DiamondTrap] - copy assignemnt operator called" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "[DiamondTrap] - " << this->_name << " destructed" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "[DiamondTrap] - My name is: " << this->_name << " | " << " [ClapTrap] - My name is: " << ClapTrap::_name << std::endl;
}