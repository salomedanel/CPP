/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:43:32 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/12 14:48:14 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
    Bureaucrat bureaucrat("Michel", 2);
    Form       form("Formulaire Inscription", 1, 151);
    try {
        std::cout << form << std::endl;
    }
    catch (Form::GradeTooHighException &e) {
        std::cerr << "GradeTooHighException: " << e.what() << std::endl;
    }
     catch (Form::GradeTooLowException &e) {
        std::cerr << "GradeTooLowException: " << e.what() << std::endl;
    }
    return (0);
}
