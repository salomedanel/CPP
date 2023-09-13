/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:51:51 by sdanel            #+#    #+#             */
/*   Updated: 2023/07/31 13:03:58 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string action = "";
    
    phonebook.welcome();
    std::cout << "Enter an action: ";
    std::cin >> action;
    while (action.compare("EXIT"))
    {
        if (action.compare("ADD") == 0)
            phonebook.add_contact();
        else if(action.compare("SEARCH") == 0)
        {
            phonebook.print_contact();
            phonebook.search_contact();
        }
        std::cin >> action;
    }
    return 0;
}