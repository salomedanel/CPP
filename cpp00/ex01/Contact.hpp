/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:34:19 by sdanel            #+#    #+#             */
/*   Updated: 2023/07/31 14:40:14 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
  private:
    std::string m_first_name;
    std::string m_last_name;
    std::string m_nickname;
    std::string m_phone_number;
    std::string m_darkest_secret;
    int			    m_index;

	std::string print_ten(std::string str) const;
    
  public:
    Contact();
    ~Contact();
    void    get_contact();
	  void	  set_index(int i);
    void    display_contact(int i) const;
    void    view_contact(int i) const;
};

#endif