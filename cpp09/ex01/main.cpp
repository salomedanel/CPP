/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:15:27 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/04 17:38:11 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
    
    if (argc != 2) {
        std::cerr << "Invalid number of arguments. Usage: ./RPN \"nb nb op\"" << std::endl;
        return (1);
    }
    RPN rpn;
    std::string arg = argv[1];
    if (rpn.checkArg(arg) == false)
        return (1);
    if (rpn.calculate(arg) == -1)
        return (1);
    std::cout << "Result: " << rpn.calculate(arg) << std::endl;
    return (0);
}