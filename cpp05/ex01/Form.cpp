/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:11:39 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/15 17:20:24 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToExecute(1), _gradeToSign(1){
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int const gradeToExecute, int const gradeToSign) : _name(name), _signed(false), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign) {
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (gradeToExecute > 150 || gradeToSign > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &src) : _name(src.getName()), _signed(src.getSigned()), _gradeToExecute(src.getGradeToExecute()), _gradeToSign(src.getGradeToSign()) {
    
    *this = src;
}

Form &Form::operator=(Form const &src) {

    if (this != &src)
        _signed = src.getSigned();
    return (*this);
}

Form::~Form() {

}

//getter
std::string Form::getName() const {

    return (_name);
}

int Form::getGradeToExecute() const {

    return (_gradeToExecute);
}

int Form::getGradeToSign() const {
    
    return (_gradeToSign);
}

bool Form::getSigned() const {

    return (_signed);
}

//methods
bool Form::beSigned(Bureaucrat &brc) {

    if (brc.getGrade() > this->getGradeToSign())
        throw Form::GradeTooLowException();
    else if (this->getSigned() == true)
        std::cout << brc.getName() <<" couldn't sign " << this->getName() << " because form was already signed" << std::endl;
    else
    {
        this->_signed = true;
        std::cout << brc.getName() << " signed " << this->getName() << std::endl;
    }
    return (_signed);
}

// exceptions
const   char* Form::GradeTooHighException::what() const throw() {
    return ("Grade too high to execute or sign the form");
};

const char* Form::GradeTooLowException::what() const throw() {
    return ("Grade too low to execute or sign the form");
};


std::ostream &operator<<( std::ostream &o, Form const &src ) {
    o << "FORM INFO" << std::endl;
    o << "Form name: " << src.getName() << std::endl
      << "Grade to sign: " << src.getGradeToSign() << std::endl
      << "Grade to execute: " << src.getGradeToExecute() << std::endl;
    return o;
}