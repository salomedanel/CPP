/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:10:26 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/12 15:40:58 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Form {
    private:
        std::string const _name;
        bool _signed;
        int const _gradeToExecute;
        int const _gradeToSign;

    public:
        //Form();
        Form(const std::string name, int const gradeToExecute, int const gradeToSign);
        Form(Form const &src);
        Form &operator=(Form const &src);
        ~Form();

        std::string getName() const;
        int getGradeToExecute() const;
        int getGradeToSign() const;

        bool beSigned(bool signedStatus);
        void signForm();

        class GradeTooHighException : public std::exception{
            public:
                const char* what() const throw()
                {
                    return ("Grade too high to execute or sign the form");
                };
        };
        class GradeTooLowException : public std::exception{
            public:
                const char* what() const throw()
                {
                    return ("Grade too low to execute or sign the form");
                };
        };
};

    std::ostream &operator<<( std::ostream& o, Form const &src );

#endif