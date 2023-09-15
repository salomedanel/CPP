/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:17:06 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/13 17:49:35 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
    DiamondTrap diamond("Jean");
    DiamondTrap diamond2("Michel");
    std::cout << std::endl;

    std::cout << "--------- Premiere attaque --------------" << std::endl;
    diamond.attack("Michel");
    diamond2.takeDamage(30);
     std::cout << "--------- Deuxieme attaque --------------" << std::endl;
    diamond.attack("Michel");
    diamond2.takeDamage(30);
     std::cout << "--------- Troisieme attaque --------------" << std::endl;
    diamond.attack("Michel");
    diamond2.takeDamage(30);
     std::cout << "--------- Quatrieme attaque --------------" << std::endl;
    diamond.attack("Michel");
    diamond2.takeDamage(30);
    std::cout << "------------- Who Am I ?? -----------------" << std::endl;

    diamond.whoAmI();
    std::cout << std::endl;

    return (0);
}
