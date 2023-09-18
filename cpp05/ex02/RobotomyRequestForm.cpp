/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:53:11 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/18 12:52:13 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45), _target("default") {
    std::cout << this->getName() << "Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target) {
    std::cout << this->getName() << "Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
    //std::cout << this->getName() << " Destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
    std::cout << "Assignation operator called" << std::endl;
    (void) src;
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const {
    return (_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    else if (this->getSigned() == false)
        throw Form::FormNotSignedException();
        
    std::cout << "BZZZZZZZZZZZZZZZZZZZZ" << std::endl;
    for (int i = 0; i < 5; i++) {
    if (i % 2 == 0) {
        std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
        }
    else {
        std::cout << this->getTarget() << " has not been robotomized successfully" << std::endl;
    }
    };
}

std::ostream &operator<<( std::ostream &o, RobotomyRequestForm const &src ) {
    o << "FORM INFO (Robot)" << std::endl;
    o << "Form name: " << src.getName() << std::endl
      << "Grade to sign: " << src.getGradeToSign() << std::endl
      << "Grade to execute: " << src.getGradeToExecute() << std::endl
      << "Is signed: " << src.signedStatus(src.getSigned()) << std::endl;
    return o;
}

