/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:24:14 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/04 13:47:10 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
        
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        virtual ~WrongAnimal();
        
        WrongAnimal(const WrongAnimal &src);
        WrongAnimal &operator=(const WrongAnimal &src);

        std::string    getType(void) const;
        virtual void makeSound(void) const;
};

#endif