/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:08:43 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/19 11:37:53 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


Intern::Intern(void)
{
    std::cout << "Intern - Default constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{  
    *this = src;
    std::cout << "Intern - Copy constructor called" << std::endl;
}

Intern::~Intern(void)
{
    std::cout << "Intern - Destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &src)
{
    (void) src;
    return (*this);
}

Form* Intern::makeForm(std::string formName, std::string FormTarget) const {
    
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    
    Form* forms[] = {
        new ShrubberyCreationForm(FormTarget),
        new RobotomyRequestForm(FormTarget),
        new PresidentialPardonForm(FormTarget)
    };

    for (int i = 0; i < 3; i++) {
        if (formName == formNames[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            Form* createdForm = forms[i];
            for (int j = 0; j < 3; j++) {
                if (j != i) {
                    delete forms[j];
                }
            }
            return (createdForm);
        }
    }
    std::cout << "Intern can't create " << formName << std::endl;
    for (int i = 0; i < 3; i++) {
        delete forms[i];
    }
    return (NULL);
}