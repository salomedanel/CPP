/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:52:50 by sdanel            #+#    #+#             */
/*   Updated: 2023/07/31 15:23:02 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : m_first_name(""), m_last_name(""), m_nickname(""), m_phone_number(""), m_darkest_secret(""), m_index(-1)
{

}

Contact::~Contact()
{

}

void    Contact::get_contact(void)
{
    std::cin.ignore();
    std::cout << "Enter first name: ";
    std::getline(std::cin, m_first_name);
    std::cout << "Enter last name: ";
    std::getline(std::cin, m_last_name);
    std::cout << "Enter  nickname: ";
    std::getline(std::cin, m_nickname);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, m_phone_number);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, m_darkest_secret);
}

void    Contact::set_index(int  i)
{
    m_index = i;
}

std::string    Contact::print_ten(std::string str) const
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void    Contact::display_contact(int i) const
{
    if (m_last_name.empty() && m_first_name.empty())
        return ;
    std::cout << i << " | " << std::flush;
    std::cout << std::setw(10) << print_ten(m_first_name) << " | " << std::flush;
    std::cout << std::setw(10) << print_ten(m_last_name) << " | " << std::flush;
    std::cout << std::setw(10) << print_ten(m_nickname) << " | " << std::flush;
    std::cout << std::endl;
}

void    Contact::view_contact(int i) const
{
    std::cout << "----------CONTACT " << i << "----------" << std::endl;
    std::cout << "First name: " << m_first_name << std::endl;
    std::cout << "Last name: " << m_last_name << std::endl;
    std::cout << "Nickname: " << m_nickname << std::endl;
    std::cout << "Phone number: " << m_phone_number << std::endl;
    std::cout << "Darkest secret: " << m_darkest_secret << std::endl;
}