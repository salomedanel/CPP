/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:43:46 by sdanel            #+#    #+#             */
/*   Updated: 2023/08/23 17:06:16 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int argc, char **argv)
{
    std::string input;
    Harl harl;

    if (argc != 2)
        return (std::cout << "Usage: ./harlFilter Level" << std::endl, 0);
        
    input = argv[1];
    harl.complain(input);
    return (0);
}  