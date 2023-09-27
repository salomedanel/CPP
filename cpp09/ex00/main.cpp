/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:22:14 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/27 15:40:54 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitCoinExchange.hpp"

int main(int argc, char **argv) {

    if (argc != 2) {
        std::cout << "Invalid nb of argument. Usage : ./btc <fichier.txt>" << std::endl;
        return (1);
    }
    std::ifstream file(argv[1]);
    if (!file.is_open())
        std::cerr << "Erreur lors de l'ouverture du fichier" << std::endl;
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
    file.close();
    return (0);
}