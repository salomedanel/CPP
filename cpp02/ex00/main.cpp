/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:44:10 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/12 11:03:10 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    
Fixed a;
Fixed b(a); // appelle le constructeur de copie -> cree un nouvel objet b avec les memes valeurs que a
Fixed c;

c = b; // appelle l'operateur d'affectation -> affecte les valeurs de b a c, mais ne cree pas de nouvel objet c. Si c avait deja des valeurs, elles sont ecrasees par celles de b.

std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;

return 0;

}
