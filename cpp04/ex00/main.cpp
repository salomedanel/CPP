/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:24:02 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/15 16:21:56 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "------------------- ANIMAL -------------------" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << std::endl;
    std::cout << "TYPE" << std::endl;
    std::cout << "Type: " << dog->getType() << " " << std::endl;
    std::cout << "Type: " << cat->getType() << " " << std::endl;
    
    std::cout << std::endl;
    std::cout << "SOUND" << std::endl;
    dog->makeSound();
    cat->makeSound();
    meta->makeSound();

    std::cout << std::endl;
    delete meta;
    delete dog;
    delete cat;

    std::cout << "------------------- WRONG ANIMAL -------------------" << std::endl;

    const WrongAnimal* wanimal = new WrongAnimal();
    const WrongAnimal* wcat = new WrongCat();
    
    std::cout << std::endl;
    std::cout << "TYPE" << std::endl;
    std::cout << "Wrong type: " << wanimal->getType() << std::endl;
    std::cout << "Wrong cat type: " << wcat->getType() << std::endl;
    
    std::cout << std::endl;
    std::cout << "SOUND" << std::endl;
    wanimal->makeSound();
    wcat->makeSound();

    std::cout << std::endl;
    delete wanimal;
    delete wcat;

return 0;

}