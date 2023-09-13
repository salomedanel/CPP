/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:45:18 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/04 13:40:40 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    private:

    public:
        Dog();
        Dog (const Dog &src);
        Dog &operator=(const Dog &src);
        ~Dog();
        
        void makeSound(void) const;
};

#endif