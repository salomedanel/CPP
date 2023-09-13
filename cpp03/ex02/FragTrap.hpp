/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:55:46 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/04 13:25:08 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
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
