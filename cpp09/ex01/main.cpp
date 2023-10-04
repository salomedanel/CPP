/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:15:27 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/04 10:56:29 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
    
    if (argc != 2) {
        std::cout << "Invalid number of arguments. Usage: ./RPN \"nb nb op\"" << std::endl;
    }
    (void) argv;
    return (0);
}