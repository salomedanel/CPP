/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:17:04 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/04 17:40:35 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &src) {
    *this = src;
}

RPN &RPN::operator=(RPN const &src) {
    (void)src;
    return (*this);
}

RPN::~RPN() {}

// parsing rules
// string doit contenir que des nb (0123456789) des espaces ou des operateurs (+-*/)

bool    RPN::checkArg(std::string &arg) {
    int i = 0;
    int nb_operators = 0;
    while (arg[i]) {
        if (arg[i] == ' ')
            i++;
        else if (arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/') {
            i++;
            nb_operators++;
        }
        else if (arg[i] >= '0' && arg[i] <= '9')
            i++;
        else {
            std::cout << "Error - invalid argument, should only contains int & operators (+-*/)" << std::endl;
            return (false);
        }
    }
    if (nb_operators == 0) {
        std::cout << "Error - no operator" << std::endl;
        return (false);
    }
    return (true);
}

int RPN::calculate(std::string &arg) {
    
    std::istringstream iss(arg); // permet de lire argv[1]
    std::stack<int> stack;
    std::string elem;

    while (iss >> elem) { // permet de parcourir le resultat de iss et d'extraire un mot et de le stocker dans la variable
       // si on croise un operateur, on met dans des variables les deux derniers elements de la pile
       if (elem == "+" || elem == "-" || elem == "*" || elem == "/") {
        if (stack.size () < 2) {
            std::cerr << "Error: not enough operands" << std::endl;
            return (-1);
        }
            int operand2 = stack.top(); 
            stack.pop();
            int operand1 = stack.top();
            stack.pop();
            // on effecture l'operation en mettant le resultat sur la pile
            if (elem == "+")
                stack.push(operand1 + operand2);
            else if (elem == "-")
                stack.push(operand1 - operand2);
            else if (elem == "*")
                stack.push(operand1 * operand2);
            else if (elem == "/") {
                if (operand2 == 0) {
                    std::cerr << "Error: division by zero" << std::endl;
                    return (-1);
                }
                stack.push(operand1 / operand2);
            }
        }
        else // si on croise un nb, on le converti et on l'envoie sur la  pile
            stack.push(std::atoi(elem.c_str()));       
    }
    return (stack.top());
}

// 1. `push()` : ajouter un élément au début.
// 2. `top()` : consulter le dernier élément ajouté.
// 3. `pop()` : supprimer le dernier élément ajouté.
