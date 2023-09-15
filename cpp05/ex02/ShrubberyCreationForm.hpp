/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:33:34 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/15 17:49:34 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form;

class   ShrubberyCreationForm : public Form
{
  private:
    std::string _target;
    ShrubberyCreationForm();
  public:
    //constructor
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);

    //operator
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
    
    //destructor
    virtual ~ShrubberyCreationForm();
    
    //getters
    std::string getTarget() const;
    
    //methods
    virtual void execute(Bureaucrat const &executor) const;
};

// operator overload
std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &src);

#endif