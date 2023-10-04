/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:22:14 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/04 00:14:38 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitCoinExchange.hpp"

int err(std::string err_msg) {
    std::cerr << err_msg << std::endl;
    return (1);
}

int main(int argc, char **argv) {

    if (argc != 2) {
        std::cerr << "Invalid nb of argument. Usage : ./btc <fichier.txt>" << std::endl;
        return (1);
    }

    std::ifstream input(argv[1], std::ifstream::in);
    if (!input.is_open())
        return err("Erreur lors de l'ouverture du fichier input");

    std::ifstream database("data.csv", std::ifstream::in);
    if (!database.is_open())
        return err("Erreur lors de l'ouverture du fichier data.csv");
    
    BitCoinExchange btc;
    btc.getData(database);

    std::string line;
    std::getline(input, line); // saute la premiere ligne
    std::cout << line << std::endl;
    while (std::getline(input, line)) {
        size_t pipe_pos = line.find('|');
        if (pipe_pos == std::string::npos) {
            std::cout << "Error - bad input => " << line << std::endl;
            continue ;
        }
        std::string date = line.substr(0, line.find('|') - 1);
        if (btc.isDateFormatValid(date) == false || btc.isDateValid(date) == false) {
            std::cout << "Error - invalid date format or value : " << date << std::endl;
            continue ;
        }
        std::string value = line.substr(line.find('|') + 1);
        if (value.find_first_of("0123456789.-") == std::string::npos) // retourn npos si aucune des valeurs n'est trouvee dans la string
            std::cout << "Error - value must contain only digit : " << value << std::endl;
        float valuef = btc.toFloat(value);
        if (btc.isValueFormatValid(valuef) == false)
            continue;
        else 
            std::cout << date << " => " << valuef << " = " << valuef * btc.findRate(date) << std::endl;
    }
    database.close();
    input.close();
    return (0);
}