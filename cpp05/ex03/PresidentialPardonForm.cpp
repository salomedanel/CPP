/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:53:11 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/18 11:58:12 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5), _target("default") {
    //std::cout << this->getName() << "Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target) {
   // std::cout << this->getName() << "Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
   // std::cout << this->getName() << " Destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
    std::cout << "Assignation operator called" << std::endl;
    (void) src;
    return (*this);
}

std::string PresidentialPardonForm::getTarget() const {
    return (_target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    else if (this->getSigned() == false)
        throw Form::FormNotSignedException();
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl; 
}

std::ostream &operator<<( std::ostream &o, PresidentialPardonForm const &src ) {
    o << "FORM INFO (Pres)" << std::endl;
    o << "Form name: " << src.getName() << std::endl
      << "Grade to sign: " << src.getGradeToSign() << std::endl
      << "Grade to execute: " << src.getGradeToExecute() << std::endl
      << "Is signed: " << src.signedStatus(src.getSigned()) << std::endl;
    return o;
}

