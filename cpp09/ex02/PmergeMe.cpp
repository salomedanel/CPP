/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:29:06 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/06 14:17:05 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {};

PmergeMe::PmergeMe(const PmergeMe &src) {
    *this = src;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src) {
    (void) src;
    return (*this);
}

PmergeMe::~PmergeMe() {};


// vector methods
void    printVector(std::vector<unsigned int> &vec) {
    std::vector<unsigned int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << " ";
}

void    PmergeMe::sortVector(int argc, char **argv) {
    std::vector<unsigned int> vector;
    for (int i = 0; i < argc; i++)
        vector.push_back(std::atoi(argv[i]));

    std::cout << "Before : ";
    printVector(vector);
}


void printList(std::list<unsigned int> &lst) {
    std::list<unsigned int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
        std::cout << *it << " ";
}


// list methods


// exception
const char* PmergeMe::InvalidArgException::what() const throw() {
    return ("Invalid argument");
}

const char* PmergeMe::DuplicateException::what() const throw() {
    return ("Duplicate found");
}