/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:18:08 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/20 17:02:44 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    try {
        Array <int> a(10);

        for (unsigned int i = 0; i < a.size(); i++) {
            a[i] = i;
            std::cout << "a[" << i << "] = " << a[i] << "    ";
        }
        std::cout << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}