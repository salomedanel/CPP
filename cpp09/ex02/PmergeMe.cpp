/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:29:06 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/09 14:59:30 by sdanel           ###   ########.fr       */
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

unsigned int    ft_stou(const std::string str) {
    unsigned int nb;
    std::stringstream ss(str);
    
    ss >> nb;
  //  std::cout << nb << std::endl;
    if (ss.fail())
        throw PmergeMe::UINTMAX();
    return nb;
}

// vector methods
void    printVector(std::vector<unsigned int> &vec) {
    std::vector<unsigned int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << " ";
}

std::vector<unsigned int> mergeVectors(std::vector<unsigned int>& left, std::vector<unsigned int>& right)
{
    std::vector<unsigned int> result;
    
    // Merge left & right dans result en mettant le plus petit element des 2 en premier puis on l'efface
    while (!left.empty() && !right.empty())
	{
        if (left.front() <= right.front())
		{
            result.push_back(left.front());
            left.erase(left.begin());
        }
		else
		{
            result.push_back(right.front());
            right.erase(right.begin());
        }
    }
    
    // Si on a efface l'element de droite (qui etait le plus petit des 2), on vient mettre l'element de gauche a la suite
    while (!left.empty())
	{
        result.push_back(left.front());
        left.erase(left.begin());
    }

    // Si on a efface l'element de gauche (qui etait le plus petit des 2), on vient mettre l'element de droite a la suite
    while (!right.empty())
	{
        result.push_back(right.front());
        right.erase(right.begin());
    }
    return result;
}

std::vector<unsigned int> mergeInsertVector(std::vector<unsigned int>& vector) {
    
    // condition de sortie de la recursivite
    if (vector.size() <= 1)
        return (vector);
    // On divise notre vecteur en 2 pour le mettre dans 2 parties, une gauche une droite
    int mid = vector.size() / 2;
    std::vector<unsigned int> left(vector.begin(), vector.begin() + mid);
    std::vector<unsigned int> right(vector.begin() + mid, vector.end());

    // On le fait recursivement jusqu'a obtenir des paires: un chiffre a gauche, un chiffre a droite
    left = mergeInsertVector(left);
    right = mergeInsertVector(right);

    // on va merger les 2 vecteurs en les triant
    return mergeVectors(left, right);
}


void    PmergeMe::sortVector(int argc, char **argv) {
    std::vector<unsigned int> vector;
    for (int i = 1; i < argc; i++)
        vector.push_back(ft_stou(argv[i]));

    std::cout << "[Vector] - Before : ";
    printVector(vector);

    std::clock_t start = std::clock();
    
    vector = mergeInsertVector(vector);
    
    std::clock_t end = std::clock();
    double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC; // constante qui sort le nb de tick par sec
    
    std::cout << std::endl << "[Vector] - After : ";
    printVector(vector);
    
    std::cout << std::endl << "Time to process a range of " << vector.size() << " elements with std::vector --> " << std::fixed << std::setprecision(0) << elapsed_time * 1e6 << " us." << std::endl;  
}


// list methods

void printList(std::list<unsigned int> &lst) {
    std::list<unsigned int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
        std::cout << *it << " ";
}

std::list<unsigned int> mergeLists(std::list<unsigned int>& left, std::list<unsigned int>& right)
{
    std::list<unsigned int> result;
    
    // Merge left & right dans result en mettant le plus petit element des 2 en premier puis on l'efface
    while (!left.empty() && !right.empty())
	{
        if (left.front() <= right.front())
		{
            result.push_back(left.front());
            left.erase(left.begin());
        }
		else
		{
            result.push_back(right.front());
            right.erase(right.begin());
        }
    }
    
    // Si on a efface l'element de droite (qui etait le plus petit des 2), on vient mettre l'element de gauche a la suite
    while (!left.empty())
	{
        result.push_back(left.front());
        left.erase(left.begin());
    }

    // Si on a efface l'element de gauche (qui etait le plus petit des 2), on vient mettre l'element de droite a la suite
    while (!right.empty())
	{
        result.push_back(right.front());
        right.erase(right.begin());
    }
    return result;
}

std::list<unsigned int> mergeInsertList(std::list<unsigned int>& list) {
    
    // condition de sortie de la recursivite
    if (list.size() <= 1)
        return (list);
    // On divise notre vecteur en 2 pour le mettre dans 2 parties, une gauche une droite
    int mid = list.size() / 2;
    std::list<unsigned int> left;
    std::list<unsigned int> right;
    
    for (int i = 0; i < mid; i++) {
        left.push_back(list.front());
        list.pop_front();
    }
    right = list;

    // On le fait recursivement jusqu'a obtenir des paires: un chiffre a gauche, un chiffre a droite
    left = mergeInsertList(left);
    right = mergeInsertList(right);

    // on va merger les 2 vecteurs en les triant
    return mergeLists(left, right);
}


void    PmergeMe::sortList(int argc, char **argv) {
    std::list<unsigned int> list;
    for (int i = 1; i < argc; i++)
        list.push_back(ft_stou(argv[i]));

    std::cout << "[List] - Before : ";
    printList(list);

    std::clock_t start = std::clock();
    
    list = mergeInsertList(list);
    
    std::clock_t end = std::clock();
    double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC; // constante qui sort le nb de tick par sec
    
    std::cout << std::endl << "[List] - After : ";
    printList(list);
    
    std::cout << std::endl << "Time to process a range of " << list.size() << " elements with std::list --> " << std::fixed << std::setprecision(0) << elapsed_time * 1e6 << " us." << std::endl;  
}

// exception
const char* PmergeMe::InvalidArgException::what() const throw() {
    return ("Invalid argument");
}

const char* PmergeMe::DuplicateException::what() const throw() {
    return ("Duplicate found");
}

const char* PmergeMe::UINTMAX::what() const throw() {
    return ("Number bigger than unsigned int max");
}