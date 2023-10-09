/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:43:34 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/09 15:00:17 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {

    if (argc < 3) {
        std::cerr << "Invalid nb of arguments. Usage: ./PmergeMe <list of nb to sort (at least 2)>" << std::endl;
        return (1);
    }
    
    PmergeMe pmm;
    
    try {
        // check si arg = int
        for (int i = 1; i < argc; i++) {
            std::string arg_str = std::string(argv[i]);
            if (arg_str.find_first_not_of("0123456789") != std::string::npos)
                throw PmergeMe::InvalidArgException();
        }

        // parse arg dans un vector tmp
        std::vector<unsigned int> tmp;
        for (int i = 1; i < argc; i++)
            tmp.push_back(ft_stou(argv[i]));
        
        // check les doublons 
        for (std::vector<unsigned int>::iterator it = tmp.begin(); it != tmp.end(); it++) {
            for (std::vector<unsigned int>::iterator itbis = it + 1; itbis != tmp.end(); itbis++) {
                if (*it == *itbis)
                    throw PmergeMe::DuplicateException();
            }
        }
    
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        return (1);
    }
    
    pmm.sortVector(argc, argv);
    std::cout << std::endl;
    pmm.sortList(argc, argv);

    return (0);
}