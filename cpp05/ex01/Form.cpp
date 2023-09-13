/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:11:39 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/12 15:42:18 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int const gradeToExecute, int const gradeToSign) : _name(name), _signed(false), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign) {
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (gradeToExecute > 150 || gradeToSign > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &src) : const _name(src._name) {
    
    *this = src;
}

Form &Form::operator=(Form const &src) {

   if (this != &src)
   { 
        _gradeToExecute = src.getGradeToExecute();
        _gradeToSign = src.getGradeToSign();
   }
    return (*this);
}

Form::~Form() {

}

std::string Form::getName() const {

    return (_name);
}

int Form::getGradeToExecute() const {

    return (_gradeToExecute);
}

int Form::getGradeToSign() const {
    
    return (_gradeToSign);
}



std::ostream &operator<<( std::ostream &o, Form const &src ) {
    o << "------------- Form Info -------------" << std::endl;
    o << "Form name: " << src.getName() << std::endl
      << "Grade to sign: " << src.getGradeToSign() << std::endl
      << "Grade to execute: " << src.getGradeToExecute() << std::endl;
    return o;
}