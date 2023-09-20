/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:31:00 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/20 16:03:57 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
    std::cout << "----- Tableau d'int -----" << std::endl;
    int tab[] = { 0, 1, 2, 3, 4 };
    iter(tab, 5, printTab);

    std::cout << std::endl;
    
    std::cout << "----- Tableau de string -----" << std::endl;
    std::string tab1[] = {"Hello", "Bonjour", "Hola", "Cioa", "Hallo"};
    iter(tab1, 5, printTab);

    std::cout << std::endl;
    
    std::cout << "----- Tableau de double -----" << std::endl;
    double tab2[] = {0.0, 0.42, 1.12, 43.09, -32.3456};
    iter(tab2, 5, printTab);
    
    return (0);
}