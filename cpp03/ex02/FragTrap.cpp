/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:02:26 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/13 17:38:22 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;

    std::cout << "[FragTrap] - " << this->_name << " constructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
    std::cout << "[FragTrap] - " << this->_name << " copied" << std::endl;
    *this = src;
    return ;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    this->_name = src._name;
    this->_hit_points = src._hit_points;
    this->_energy_points = src._energy_points;
    this->_attack_damage = src._attack_damage;
    std::cout << "[FragTrap] - copy assignemnt operator called" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "[FragTrap] - " << this->_name << " destructed" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    if (this->_energy_points == 0)
    {
        std::cout << "[FragTrap] - " << this->_name << " is out of energy :(" << std::endl;
        return ;
    }
    this->_energy_points--;
    std::cout << "FragTrap " << this->_name << " high five guys!" << std::endl; 
}