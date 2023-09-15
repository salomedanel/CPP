/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:33:34 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/15 17:39:03 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class   PresidentialPardonForm : public Form
{
  private:
    std::string _target;
    PresidentialPardonForm();
  public:
    //constructor
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &src);

    //operator
    PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
    
    //destructor
    virtual ~PresidentialPardonForm();
    
    //getters
    std::string getTarget() const;
    
    //methods
    virtual void execute(Bureaucrat const &executor) const;
};

// operator overload
std::ostram &operator<<(std::ostream &o, PresidentialPardonForm const &src);

#endif