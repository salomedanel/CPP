/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:39:47 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/04 13:34:32 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
//#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;

    public:
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &src);
        DiamondTrap &operator=(const DiamondTrap &src);
        ~DiamondTrap();
    
        using ScavTrap::attack; // using permet d'utiliser une methode d'une autre classe
        void whoAmI(void);
}; 

#endif