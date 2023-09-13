/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:17:06 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/05 15:23:34 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap scav("Salome");
    ScavTrap scav2("Jean");
    std::cout << std::endl;

    scav.attack("Zombie");
    scav.attack("Zombie");
    scav.attack("Zombie");
    scav.attack("Zombie");
    scav.attack("Zombie");
    scav2.attack("Salome");
    scav.takeDamage(10);
    scav.beRepaired(50);
    scav.attack("Zombie");
    scav.guardGate();
    std::cout << std::endl;
    
    return (0);
}