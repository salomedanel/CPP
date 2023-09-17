/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:43:32 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/16 13:27:09 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main (void)
{
    std::cout << "----- TEST 1: Bureaucrat grade too high/low -----" << std::endl;
    try {
        Bureaucrat bureaucrat("Michel", 145);
        Form *form = new ShrubberyCreationForm("home");
        std::cout << *form << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << e.what() << std::endl;
    }
    catch (Form::GradeTooHighException &e) {
        std::cerr << e.what() << std::endl;
    }
     catch (Form::GradeTooLowException &e) {
        std::cerr << e.what() << std::endl;
    }
    catch (Form::FormAlreadySignedException &e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    return (0);
}
