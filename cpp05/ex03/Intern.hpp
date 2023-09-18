/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:02:15 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/18 14:02:29 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

class Intern
{
private:
    /*attr*/
public:
    Intern(void);
    Intern(const Intern &toCopy);
    Intern	&operator = (const Intern &toCopy);
    ~Intern(void);
};

#endif