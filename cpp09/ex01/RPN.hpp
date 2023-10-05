/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:15:58 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/05 13:44:07 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
#include <sstream>

class RPN {
    public:
        RPN();
        RPN(RPN const &src);
        RPN &operator=(RPN const &src);
        ~RPN();

        //methods
        bool    checkArg(std::string &arg);
        int     calculate(std::string &arg);

        //exceptions
        class DivZero : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class NotEnoughOperand : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

#endif