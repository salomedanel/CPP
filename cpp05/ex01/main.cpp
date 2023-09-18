/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:43:32 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/18 13:05:13 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
    std::cout << "----- TEST 1: Bureaucrat grade too high/low -----" << std::endl;
    try {
        Bureaucrat bureaucrat("Michel", 151);
        Form       form("Formulaire d'insciption", 2, 12);
        std::cout << form << std::endl;
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
    std::cout << std::endl;
    std::cout << "----- TEST 2: Form grade too high/low -----" << std::endl;
        try {
        Bureaucrat bureaucrat("Jean", 12);
        Form       form("Formulaire d'insciption", 2, 0);
        std::cout << form << std::endl;
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
    std::cout << std::endl;
    std::cout << "----- TEST 3: Form already signed -----" << std::endl;
        try {
        Bureaucrat bureaucrat("Jean", 12);
        Form       form("Formulaire d'insciption", 2, 30);
        std::cout << form << std::endl;
        form.beSigned(bureaucrat);
        form.beSigned(bureaucrat);
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
    std::cout << std::endl;
    std::cout << "----- TEST 4: Grade to low to sign -----" << std::endl;
        try {
        Bureaucrat bureaucrat("Jean", 35);
        Form       form("Formulaire d'insciption", 23, 30);
        std::cout << form << std::endl;
        form.beSigned(bureaucrat);
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
    std::cout << std::endl;
    return (0);
}
