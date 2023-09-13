/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:22:19 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/05 15:21:38 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;

    std::cout << "[ScavTrap] - " << this->_name << " constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    std::cout << "[ScavTrap] - " << this->_name << " copied" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "[ScavTrap] - " << this->_name << " destrcuted" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
    this->_name = src._name;
    this->_hit_points = src._hit_points;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    std::cout << "[ScavTrap] - copy assignemnt operator called" << std::endl;
    return *this;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "ScavTrap" << this->_name << "has no more energy" << std::endl;
        return ;
    }
    if (this->_hit_points <= 0)
    {
        std::cout << "ScavTrap" << this->_name << "has been killed... RIP" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
    this->_energy_points--;
    this->_hit_points = this->_hit_points - this->_attack_damage;
    // std::cout << "energy point = " << this->_energy_points << std::endl;
    // std::cout << "hit point = " << this->_hit_points << std::endl;
    // std::cout << "attack damage = " << this->_attack_damage << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap - " << this->_name << " is now in Gate keeper mode." << std::endl;
}