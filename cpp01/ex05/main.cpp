/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:43:46 by sdanel            #+#    #+#             */
/*   Updated: 2023/08/30 10:05:39 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(void)
{
    std::string input;
    Harl harl;

    while (input.compare("stop"))
    {
        std::cout << "Enter a level: ";
        std::cin >> input;
        if (!std::cin)
            return (0);
        harl.complain(input);
    }
    return (0);
}  