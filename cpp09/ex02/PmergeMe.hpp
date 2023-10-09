/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:45:17 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/09 14:01:34 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <limits>


class PmergeMe {
    public:
    PmergeMe();
    PmergeMe(const PmergeMe &src);
    PmergeMe &operator=(const PmergeMe &src);
    ~PmergeMe();
    
    //methods
    void sortVector(int argc, char **argv);
    void sortList(int argc, char **argv);

    //exception
    class InvalidArgException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
    class DuplicateException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
    class UINTMAX : public std::exception {
        public:
            virtual const char* what() const throw();
    };
};

unsigned int    ft_stou(const std::string str);

#endif
