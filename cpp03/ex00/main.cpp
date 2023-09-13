/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:17:06 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/13 11:11:34 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int    main(void)
{
    ClapTrap clap("Salome");
    ClapTrap clap2("Michel");
    
    clap.attack("Zombie");
    clap.attack("Zombie");
    clap.attack("Zombie");
    clap.attack("Zombie");
    clap.attack("Zombie");
    clap.attack("Zombie");
    clap.attack("Zombie");
    clap.attack("Zombie");
    clap2.takeDamage(5);
    clap.beRepaired(12);
    clap2.beRepaired(3);
    
    return (0);
}