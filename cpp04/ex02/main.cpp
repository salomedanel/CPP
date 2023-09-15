/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:24:02 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/15 15:50:14 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{

   //Animal test; // ne compile pas car Animal n'est pas instanciable
    std::cout << "------ Creation des objets Dog / Cat ------" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << std::endl;
    std::cout << "------ Destruction des objets Dog / Cat ------" << std::endl;
    delete j;//should not create a leak
    delete i;
    
    std::cout << std::endl;
    std::cout << "------ Creation des objets Dog / Cat dans une loop ------" << std::endl;
    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    std::cout << std::endl;
    std::cout << "------ Destruction des objets Dog / Cat dans une loop ------" << std::endl;
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}