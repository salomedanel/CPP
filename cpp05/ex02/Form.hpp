/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:10:26 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/16 13:19:33 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        std::string const _name;
        bool _signed;
        const int _gradeToExecute;
        const int _gradeToSign;

    public:
        Form();
        Form(const std::string name, int const gradeToExecute, int const gradeToSign);
        Form(Form const &src);
        Form &operator=(Form const &src);
        virtual ~Form();

        std::string getName() const;
        int getGradeToExecute() const;
        int getGradeToSign() const;
        bool getSigned() const;
        std::string signedStatus(bool _signed) const;

        bool beSigned(Bureaucrat &brc);
        void signForm();
        virtual void execute(Bureaucrat const &executor) const = 0; // permet de creer une classe abstraite

        class GradeTooHighException : public std::exception{
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char* what() const throw();
        };
        class FormAlreadySignedException : public std::exception{
            public:
                const char* what() const throw();
        };
};

std::ostream &operator<<( std::ostream& o, Form const &src );

#endif

