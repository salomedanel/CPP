/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:17:06 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/13 16:10:35 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    FragTrap frag("Salome");
    FragTrap frag2("Michel");
    std::cout << std::endl;
    
    std::cout << "--------- Premiere attaque --------------" << std::endl;
    frag.attack("Michel");
    frag2.takeDamage(30);
     std::cout << "--------- Deuxieme attaque --------------" << std::endl;
    frag.attack("Michel");
    frag2.takeDamage(30);
     std::cout << "--------- Troisieme attaque --------------" << std::endl;
    frag.attack("Michel");
    frag2.takeDamage(30);
     std::cout << "--------- Quatrieme attaque --------------" << std::endl;
    frag.attack("Michel");
    frag2.takeDamage(30);
    std::cout << "------------- High Five -----------------" << std::endl;

    frag.highFivesGuys();
    std::cout << std::endl;
    
    return (0);
}