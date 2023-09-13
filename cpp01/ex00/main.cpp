/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:56:01 by sdanel            #+#    #+#             */
/*   Updated: 2023/08/20 13:26:25 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "Creating zombie on the stack." << std::endl;
    Zombie zombie1("ZombieStack");
    zombie1.announce();
    
    std::cout << "Creating zombie on the heap." << std::endl;
    Zombie *zombie2 = newZombie("ZombieHeap");
    zombie2->announce();

    randomChump("Jean-Christophe");
    delete zombie2;
    return 0;
}