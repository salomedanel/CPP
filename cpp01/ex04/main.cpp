/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:51:18 by sdanel            #+#    #+#             */
/*   Updated: 2023/08/22 14:36:18 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <iostream>
#include <ostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4) {
        std::cerr << "Wrong number of argument. Should be FileName s1 s2" << std::endl;
        return (0);
    }
    else {
        sedlosers sed(argv[1]);
        sed.replace(argv[2], argv[3]);
    }
}