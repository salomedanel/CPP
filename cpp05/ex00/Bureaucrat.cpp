/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:35:53 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/15 17:23:07 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
    
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src) {

   if (this != &src)
   { 
        _grade = src.getGrade();
   }
    return (*this);
}

Bureaucrat::~Bureaucrat() {

}

//getters
std::string Bureaucrat::getName() const {

    return (_name);
}

int Bureaucrat::getGrade() const {

    return (_grade);
}

//methods
void Bureaucrat::incrementGrade() {

    if (_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
    std::cout << "Grade -1 --> New grade = " << _grade<< std::endl;
}

void    Bureaucrat::decrementGrade() {

    if (_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
    std::cout << "Grade +1 --> New grade = " << _grade<< std::endl;
}

// exceptions
const   char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too high");
};

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too low");
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src) {
    o << "Bureacrat name: " << src.getName() << " | bureaucrat grade: " << src.getGrade();
    return o;
}
