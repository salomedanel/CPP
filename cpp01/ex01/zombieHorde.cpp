/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:54:53 by sdanel            #+#    #+#             */
/*   Updated: 2023/08/20 13:55:01 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
    int i = 0;
    Zombie *horde = new Zombie[N];
    
    while(i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return (horde);
}