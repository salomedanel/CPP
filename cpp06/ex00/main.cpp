/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:47:28 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/20 11:45:53 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

// static_cast permet de faire des conversions de type "sures" avec des type de variables connues par le compilateur

int main(int argc, char **argv) {
    
    if (argc != 2) {
        std::cout << "Wrong number of arguments. Usage: ./Conversion <input>" << std::endl;
        return (1);
    }
    try {
        ScalarConversion conv;
        conv.setStr(argv[1]);
        conv.convertInput();
        std::cout << conv << std::endl;
    }
    catch (ScalarConversion::ImpossibleException &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}