/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:41:43 by sdanel            #+#    #+#             */
/*   Updated: 2023/07/31 14:17:06 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
    private:
        Contact m_contacts[8];
        int     m_nbcontacts;
        
    public:
        PhoneBook();
        ~PhoneBook();
        void    welcome(void) const;
        void    add_contact(void);
        void    print_contact(void)const;
        void    search_contact(void) const;  
    
};

#endif