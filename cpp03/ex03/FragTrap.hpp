/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:55:46 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/04 13:31:44 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap // virtual permet d'eviter de dupliquer les attributs parmi les classes (evite l'ambiguite)
{
    private:
        FragTrap();

    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &src);
        FragTrap &operator=(const FragTrap &src);
        ~FragTrap();

    void    highFivesGuys(void);
};

#endif
