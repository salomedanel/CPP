/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:44:10 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/12 14:02:54 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main ( void ) 
{
    Fixed        a;
    Fixed const  b( Fixed( 5.05f ) * Fixed( 2 ) ); // cree un objet Fixed temporaire qui donne 10.1

    std::cout << "a = " << a << std::endl;
    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    std::cout << std::endl;

    std::cout << "max entre " << a << " et " << b << "   ->   " <<  Fixed::max( a, b ) << std::endl;
    std::cout << "min entre " << a << " et " << b << "   ->   " << Fixed::min( a, b ) << std::endl;
    
    return 0;
}
