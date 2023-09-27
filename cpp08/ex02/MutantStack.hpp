/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:25:59 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/27 14:06:13 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include <algorithm>


template <typename T>
class MutantStack : public std::stack<T> {
    public:
        std::stack<int> _stack;
        MutantStack() {};
        MutantStack(const MutantStack<T> &src) { *this = src; };
        MutantStack<T> &operator=(const MutantStack<T> &rhs) {
            if (this != &rhs)
                this->_stack = rhs._stack;
            return *this;
        };
        virtual ~MutantStack() {};

        typedef typename std::stack<T>::container_type::iterator iterator; // alias pour creer un iterateur plus facilement. Container_type permet de recuperer le type de container utilisé par la stack (deque par defaut)
        iterator begin() {
            return this->c.begin(); // retourne un iterator sur le premier élément de la pile. c fait reference au container sous-jacent _stack
        }
        iterator end() {
            return this->c.end(); // retourne un iterator sur le dernier élément de la pile
        }
};

#endif