/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:17:06 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/13 16:03:22 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap scav("Salome");
    ScavTrap scav2("Michel");
    std::cout << std::endl;
    
    std::cout << "--------- Premiere attaque --------------" << std::endl;
    scav.attack("Michel");
    scav2.takeDamage(20);
     std::cout << "--------- Deuxieme attaque --------------" << std::endl;
    scav.attack("Michel");
    scav2.takeDamage(20);
     std::cout << "--------- Troisieme attaque --------------" << std::endl;
    scav.attack("Michel");
    scav2.takeDamage(20);
     std::cout << "--------- Quatrieme attaque --------------" << std::endl;
    scav.attack("Michel");
    scav2.takeDamage(20);
     std::cout << "--------- Cinquieme attaque --------------" << std::endl;
    scav.attack("Michel");
    scav2.takeDamage(20);
    std::cout << "------------- GuardGate -----------------" << std::endl;

    scav.guardGate();
    std::cout << std::endl;
    
    return (0);
}