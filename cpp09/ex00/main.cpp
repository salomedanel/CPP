/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:22:14 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/02 16:18:16 by sdanel           ###   ########.fr       */
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
    std::getline(input, line); // sauter la premiere ligne
    while (std::getline(input, line)) {
        std::string date = line.substr(0, line.find('|'));
        if (btc.isDateFormatValid(date) == false || btc.isDateValid(date) == false)
            std::cout << date << " : invalid date format" << std::endl;
        std::string rate = line.substr(line.find('|') + 1);
        float ratef = btc.toFloat(rate);
        if (btc.isValueFormatValid(ratef) == false)
            std::cout << rate << " : invalid value format" << std::endl;
    }
    // ouvrir le fichier input et lire les données
    // pour chaque ligne, parser la date et le taux
    // trouver le bon taux associer a la date dans le data.csv (la map)
    // calculer le taux de change
    // afficher la sortie "Date : <date> | Taux : <taux>"
    
    return (0);
}

