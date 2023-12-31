/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:10:26 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/15 16:51:02 by sdanel           ###   ########.fr       */
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
        ~Form();

        std::string getName() const;
        int getGradeToExecute() const;
        int getGradeToSign() const;
        bool getSigned() const;

        bool beSigned(Bureaucrat &brc);
        void signForm();

        class GradeTooHighException : public std::exception{
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                const char* what() const throw();
        };
};

    std::ostream &operator<<( std::ostream& o, Form const &src );

#endif

