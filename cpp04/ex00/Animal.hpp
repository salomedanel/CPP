/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:24:14 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/13 17:15:32 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;
        
    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal(); // permet d'appeler le destructeur de la classe derivee par defaut et non celui ci - permet une bonne gestion de la memoire.
        
        Animal(const Animal &src);
        Animal &operator=(const Animal &src);

        std::string    getType(void) const;
        virtual void makeSound(void) const;
};

#endif