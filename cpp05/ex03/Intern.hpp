/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:02:15 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/18 16:34:54 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <iostream>

class Form;

class Intern {
private:
    /*attr*/
public:
    Intern(void);
    Intern(const Intern &src);
    Intern	&operator = (const Intern &src);
    ~Intern(void);

    Form* makeForm(std::string formName, std::string formTarget) const;
};

#endif