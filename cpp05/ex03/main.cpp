/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:43:32 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/19 11:38:39 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main (void)
{

    Intern someRandomIntern;
    Form * rff;
    std::cout << std::endl;
    
    std::cout << "-----------------TEST 1--------------------" << std::endl;
    rff = someRandomIntern.makeForm("shrubbery ", "forest");
    if (rff != NULL)
        std::cout << *rff << std::endl;
    std::cout << "-----------------TEST 2--------------------" << std::endl;
    rff = someRandomIntern.makeForm("presidential pardon", "home");
    if (rff != NULL)
        std::cout << *rff << std::endl;
    std::cout << "-----------------TEST 3--------------------" << std::endl;
    rff = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rff != NULL)
        std::cout << *rff << std::endl;


    delete rff;
    return (0);
}
