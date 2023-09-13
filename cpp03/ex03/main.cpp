/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:17:06 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/05 15:40:43 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
    DiamondTrap diamond("Jean");
    DiamondTrap diamond2("Michel");
    std::cout << std::endl;

    diamond.attack("Zombie");
    diamond.takeDamage(150);
    diamond2.beRepaired(100);
    diamond.whoAmI();
    std::cout << std::endl;

    return (0);
}
