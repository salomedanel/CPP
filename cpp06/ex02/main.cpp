/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:53:54 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/20 13:30:06 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// dynamic_cast permet de convertir un pointeur ou une reference d'une classe

int main(void) {

    srand(time(NULL));
    
    for (int i = 0; i < 5; i++) {
        
        Base *base = generate();
        std::cout << "[" << i << "] - " << "Lettre generee: ";
        identify(base); // prend un objet de type Base et affiche l'objet reel qu'est base (A, B ou C) grace au dynamic_cast
        std::cout << " | ";
        identify(*base); // idem mais en passant par une reference
        std::cout << std::endl;
        delete base;
    }
    return (0);
}