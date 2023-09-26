/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:42:52 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/26 16:05:42 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int main()
{
    std::cout << "----- Occurence found -----" << std::endl;
    std::vector<int> tab(5, 4);
    easyFind(tab, 4);

    std::cout << std::endl;
    std::cout << "----- Occurence not found -----" << std::endl;
    easyFind(tab, 3);
    return 0;
}