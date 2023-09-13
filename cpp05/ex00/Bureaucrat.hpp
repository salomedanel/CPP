/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:35:02 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/12 15:33:18 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <ostream>

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

        class GradeTooHighException {
            public:
                const char* what() const throw()
                {
                    return ("Grade too high");
                };
        };
        class GradeTooLowException {
            public:
                const char* what() const throw()
                {
                    return ("Grade too low");
                };
        };
};

std::ostream &operator<<( std::ostream& o, const Bureaucrat& src );

#endif