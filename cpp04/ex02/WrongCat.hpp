/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:47:42 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/04 14:57:07 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
    private:

    public:
        WrongCat();
        WrongCat(const WrongCat &src);
        WrongCat& operator=(const WrongCat &src);
        ~WrongCat();

    void    makeSound(void) const;     
};

#endif 