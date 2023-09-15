/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:53:11 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/15 18:29:36 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137), _target("default") {
    std::cout << "Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {
    std::cout << "Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    std::cout << "Destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
    {
        *this = src;
    }
    return (*this);
}

std::string ShrubberyCreationForm::getTarget() const {
    return (_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    // else if (this->isSigned() == f)
    // std::cout << "ShrubberyCreationForm is executed" << std::endl;
}

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &src) {
    o << "Target - " << src.getTarget() << std::endl;
    o << "Signed - " << src.getSigned() << std::endl;
    o << " Required grades: " << src.getGradeToSign() << " / " << src.getGradeToExecute() << std::endl;
    return (o);
}

