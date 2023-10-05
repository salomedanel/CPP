/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:43:34 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/04 18:33:01 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {

    if (argc < 2) {
        std::cerr << "Invalid nb of arguments. Usage: ./PmergeMe <list of nb to sort>" << std::endl;
        return (1);
    }
    (void) argv;
    return (0);
}