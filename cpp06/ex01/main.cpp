/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:39:17 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/20 11:44:42 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// reinterpret cast permet de convertir un type de data en un autre type de data

int main()
{
	Data ptr;
	ptr.str = "Hello";
	ptr.i = 24;
	
	Data ptr2;
	ptr2.str = "Bonjour";
	ptr2.i = 42;



	std::cout << "______STRUCTURE DE BASE_____" << std::endl;
	std::cout << "address: " << &ptr << std::endl;
	std::cout << "str: " << ptr.str << std::endl;
	std::cout << "i: " << ptr.i << std::endl;

	std::cout << "address: " << &ptr2 << std::endl;
	std::cout << "str: " << ptr2.str << std::endl;
	std::cout << "i: " << ptr2.i << std::endl;

	std::cout << std::endl;
	
	Serializer a;

	Data *reserialized_struct = a.deserialize(a.serialize(&ptr));

	std::cout << "______RESERIALIZED STRUCTURE_____" << std::endl;
	std::cout << "address: " << reserialized_struct << std::endl;
	std::cout << "str: " << reserialized_struct->str << std::endl;
	std::cout << "i: " << reserialized_struct->i << std::endl;

	std::cout << "address: " << &ptr2 << std::endl;
	std::cout << "str: " << ptr2.str << std::endl;
	std::cout << "i: " << ptr2.i << std::endl;


	return (0);
}