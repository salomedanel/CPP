/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:22:05 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/04 12:24:57 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{   
    private:
        ScavTrap();

    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &src);
        ScavTrap &operator=(const ScavTrap &src);
        ~ScavTrap();

        void    attack(std::string const &target);
        void    guardGate();
};

#endif