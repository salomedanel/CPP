/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:22:09 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/05 15:29:20 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "[ClapTrap] - " << _name << " constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "[ClapTrap] - " << _name << " destructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    *this = src;
    std::cout << "[ClapTrap] - copied" << std::endl;
    return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
    this->_name = src._name;
    this->_hit_points = src._hit_points;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    std::cout << "[ClapTrap] - copy assignemnt operator called" << std::endl;    return *this;
}

void    ClapTrap::attack(const std::string &target)
{
    if (_energy_points <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy left to attack" << std::endl;
        return ;
    }
    if (_hit_points <= 0)
    {
        std::cout << "ClapTrap " << _name << " has been killed... RIP" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    _energy_points--;
    _hit_points = _hit_points - _attack_damage;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > (unsigned int)_hit_points) {
        _hit_points = 0;
        std::cout << _name << " is dead..." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
        _hit_points = _hit_points - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_points <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy :(" << std::endl;
        return;
    }
    _energy_points--;
    _hit_points = _hit_points + amount;
    std::cout << "ClapTrap " << _name << " gains " << amount << " hit points!" << std::endl;
}



