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

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class   RobotomyRequestForm : public Form
{
  private:
    std::string _target;
    RobotomyRequestForm();
  public:
    //constructor
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &src);

    //operator
    RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
    
    //destructor
    virtual ~RobotomyRequestForm();
    
    //getters
    std::string getTarget() const;
    
    //methods
    virtual void execute(Bureaucrat const &executor) const;
};

// operator overload
std::ostram &operator<<(std::ostream &o, RobotomyRequestForm const &src);

#endif