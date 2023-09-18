/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:35:02 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/18 12:32:16 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <ostream>

#include "AForm.hpp"

class Form;

class Bureaucrat {

    private:
        std::string const _name;
        int _grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat &operator=(Bureaucrat const &src);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();
        void executeForm(Form const &form);

        class GradeTooHighException {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException {
            public:
               virtual const char* what() const throw();
        };
};

std::ostream &operator<<( std::ostream& o, Bureaucrat const &src );

#endif