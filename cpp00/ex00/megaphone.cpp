/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:27:44 by sdanel            #+#    #+#             */
/*   Updated: 2023/07/29 16:04:56 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    std::string str;
    int i;
    int j;

    i = 1;
    j = 0;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else if (argc > 1)
    {
        while (i < argc)
        {
        	while (argv[i][j])
            {
            	cout << (char)toupper(argv[i][j]);
            	j++;
        	}
			j = 0;
        	i++;
    	}
		std::cout << std::endl;
	}
    return (0);
}