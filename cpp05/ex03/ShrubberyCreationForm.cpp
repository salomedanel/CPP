/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:53:11 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/19 11:23:02 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137), _target("default") {
   // std::cout << this->getName() << "Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {
  //  std::cout << this->getName() << "Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
   // std::cout << this->getName() << " Destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
    std::cout << "Assignation operator called" << std::endl;
    (void) src;
    return (*this);
}

std::string ShrubberyCreationForm::getTarget() const {
    return (_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    else if (this->getSigned() == false)
        throw Form::FormNotSignedException();
        
    std::ofstream file((this->getTarget() + "_shrubbery").c_str());
    for (int i = 0; i < 3; i++) {
    file << "------- Here is a little forest :) -------" << std::endl;
    file << "               ,@@@@@@@," << std::endl;
    file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
    file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
    file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
    file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
    file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
    file << "       |o|        | |         | |" << std::endl;
    file << "       |.|        | |         | |" << std::endl;
    file << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
    file << std::endl;
    }
    file.close();
}

std::ostream &operator<<( std::ostream &o, ShrubberyCreationForm const &src ) {
    o << "FORM INFO (Shrub)" << std::endl;
    o << "Form name: " << src.getName() << std::endl
      << "Grade to sign: " << src.getGradeToSign() << std::endl
      << "Grade to execute: " << src.getGradeToExecute() << std::endl
      << "Is signed: " << src.signedStatus(src.getSigned()) << std::endl;
    return o;
}
