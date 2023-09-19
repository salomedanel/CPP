/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:47:28 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/19 17:21:02 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

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