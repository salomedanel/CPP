/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:17:06 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/13 15:41:47 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int    main(void)
{
    ClapTrap clap("Salome");
    ClapTrap clap2("Michel");

    std::cout << std::endl;
    
    std::cout << "--------- Premiere attaque --------------" << std::endl;
    clap.attack("Michel");
    clap2.takeDamage(5);
    std::cout << "--------- Deuxieme attaque --------------" << std::endl;
    clap.attack("Michel");
    clap2.takeDamage(5);
    std::cout << "--------- Troisieme attaque --------------" << std::endl;
    clap.attack("Michel");
    clap2.takeDamage(5);
    std::cout << "------------- Reparation ------------------" << std::endl;
    clap.beRepaired(1);
    clap2.beRepaired(3);

    std::cout << std::endl;
    
    return (0);
}

