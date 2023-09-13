/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:53:11 by sdanel            #+#    #+#             */
/*   Updated: 2023/08/28 15:12:18 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : m_nbcontacts(0)
{

}

PhoneBook::~PhoneBook()
{

}

void    PhoneBook::welcome(void) const
{
    std::cout << " ☎️ Welcome in your phonebook ! ☎️ " << std::endl;
    std::cout << "-----------HOW TO USE-----------" << std::endl;
    std::cout << "ADD\t: to add a new contact" << std::endl;
    std::cout << "SEARCH\t: to look for a contact" << std::endl;
    std::cout << "EXIT\t: to quit the phonebook" << std::endl;
    std::cout << "--------------------------------" << std::endl;
}

void    PhoneBook::add_contact(void)
{
    m_contacts[m_nbcontacts % 8].get_contact();
    m_contacts[m_nbcontacts % 8].set_index(m_nbcontacts % 8);
    m_nbcontacts++;
}

void    PhoneBook::print_contact(void) const
{
    int i = 0;
    std::cout << "------------------CONTACTS------------------" << std::endl;
    while (i < 8)
    {
        this->m_contacts[i].display_contact(i);
        i++;
    }
}

void    PhoneBook::search_contact(void) const
{
    int     id = -1;
    bool    valid = true;
    
    if (m_nbcontacts == 0)
    {
        std::cout << "Add a contact first" << std::endl;
        valid = false;
        return ;
    }
    std::cout << "Which contact would you like to see ? (write an index)" << std::endl;
    std::cin >> id;
    if (std::cin.fail() || id < 0 || id > 8)
    {
        std::cout << "Wrong contact ID, please choose action again" << std::endl;
        std::cin.clear();
        return ;
    }
    if (id >= m_nbcontacts && m_nbcontacts != 0)
    {
        std::cout << "Contact does not exist. Write a new command." << std::endl;
        valid = false;
    }
    if (valid == true)
        this->m_contacts[id].view_contact(id);
}