/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:55:09 by sdanel            #+#    #+#             */
/*   Updated: 2023/08/20 14:43:15 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon      *_weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack(void) const;
        void    setWeapon(Weapon &weapon);
};

#endif