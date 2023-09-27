/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:42:52 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/27 13:44:02 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {

   std::cout << "\033[1;33;4mTest du sujet\033[0m" << std::endl; 
    try {
        Span sp = Span(8);
        
        std::cout << "--- Ajout de nb dans le tableau ---" << std::endl;
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "--- Shortest & Longest span ---" << std::endl;
        std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span = " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "\033[1mTest tableau full\033[0m" << std::endl; 
    try {
        Span sp1 = Span(5);
        for (int i = 0; i < 6; i++) {
            sp1.addNumber(i);
        }
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "\033[1;33;4mTest pas assez d'int pour span\033[0m" << std::endl; 
    try {
        Span sp2 = Span(5);
        sp2.addNumber(1);
        sp2.shortestSpan();
        sp2.longestSpan();
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "\033[1;33;4mTest avec bcp d'int\033[0m" << std::endl; 
    try {
        Span sp3 = Span(1000);
        for (int i = 0; i < 1000; i++) {
            sp3.addNumber(i);
        }
        std::cout << "--- Shortest & Longest span ---" << std::endl;
        std::cout << "Shortest span = " << sp3.shortestSpan() << std::endl;
        std::cout << "Longest span = " << sp3.longestSpan() << std::endl;
    } 
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
        return 0;
}