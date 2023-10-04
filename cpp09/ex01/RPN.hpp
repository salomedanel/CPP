/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:15:58 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/04 10:52:45 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>

class RPN {
    private:
        std::stack<int> _stack;
    public:
        RPN();
        RPN(RPN const &src);
        RPN &operator=(RPN const &src);
        ~RPN();

        //methods
        bool    checkArg(std::string &arg);
        int     calculate(std::string &arg, std::stack<int> stack);
};

#endif