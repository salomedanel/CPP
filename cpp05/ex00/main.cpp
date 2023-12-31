/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:43:32 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/15 15:56:34 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
    try {
        Bureaucrat bureaucrat("Michel", 149);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        bureaucrat.decrementGrade();
        bureaucrat.decrementGrade();
        bureaucrat.decrementGrade();
        bureaucrat.decrementGrade();
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << "GradeTooHighException: " << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << "GradeTooLowException: " << e.what() << std::endl;
    }
    return (0);
}
