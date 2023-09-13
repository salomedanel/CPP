/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:54:53 by sdanel            #+#    #+#             */
/*   Updated: 2023/08/29 19:14:19 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie		*horde;
	int			nbZombies;
	std::string	name = "zombie";

	if (argc == 1 || std::atoi(argv[1]) <= 0)
		nbZombies = 10;
	else
		nbZombies = atoi(argv[1]);
	if (argc >= 3)
		name = argv[2];
	
	horde = zombieHorde(nbZombies, name);

	for (int i = 0; i < nbZombies; i++)
		horde[i].announce();
	
	delete [] horde;
	std::cout << "The horde of " << nbZombies << " zombies has been killed." << std::endl;
	return (0);
}