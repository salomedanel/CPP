/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:43:32 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/18 17:28:00 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main (void)
{

    Intern someRandomIntern;
    Form * rff;
    
    //rff = someRandomIntern.makeForm("shrubbery ", "forest");
    rff = someRandomIntern.makeForm("shrubbery creation", "home");
    delete rff;
    std::cout << std::endl;
    
    // try {
    //     Bureaucrat bureaucrat("Michel", 5);
    //     ShrubberyCreationForm form1("forest");
    //     RobotomyRequestForm form2("robot");
    //     PresidentialPardonForm form3("president");
    //     std::cout << std::endl;
        
    //     std::cout << "-------------------- FORM 1 --------------------" << std::endl;
    //     std::cout << form1;
    //     form1.beSigned(bureaucrat);
    //     bureaucrat.executeForm(form1);
        
        
    //     std::cout << "-------------------- FORM 2 --------------------" << std::endl;
    //     std::cout << form2;
    //     form2.beSigned(bureaucrat);
    //     bureaucrat.executeForm(form2);
    //     std::cout << std::endl;

    //     std::cout << "-------------------- FORM 3 --------------------" << std::endl;
    //     std::cout << form3;
    //     form3.beSigned(bureaucrat);
    //     bureaucrat.executeForm(form3);
    //     std::cout << std::endl;
    // }
    // catch (std::exception &e) {
    //     std::cerr << e.what() << std::endl;
    // }
    return (0);
}
