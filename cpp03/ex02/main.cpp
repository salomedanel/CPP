/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:17:06 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/05 15:30:45 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    FragTrap frag("Salome");
    std::cout << std::endl;

    frag.attack("Zombie");
    frag.attack("Zombie");
    frag.attack("Zombie");
    frag.attack("Zombie");
    frag.attack("Zombie");
    frag.takeDamage(10);
    frag.beRepaired(100);
    frag.highFivesGuys();
    std::cout << std::endl;
    
    return (0);
}