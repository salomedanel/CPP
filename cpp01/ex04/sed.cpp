/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:02:07 by sdanel            #+#    #+#             */
/*   Updated: 2023/08/29 19:22:39 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

sedlosers::sedlosers(std::string filename) : _infile(filename)
{
    this->_outfile = this->_infile + ".replace";
    return ;
}

sedlosers::~sedlosers()
{
    return ;
}

void    sedlosers::replace(std::string s1, std::string s2)
{
    std::ifstream inputFile(this->_infile.c_str());
    if (inputFile.is_open())
    {
        std::string content;
        if (std::getline(inputFile, content, '\0'))
        {
            std::ofstream outputFile(this->_outfile.c_str());
            size_t pos = content.find(s1);
            while (pos != std::string::npos)
            {
                content.erase(pos, s1.length());
                content.insert(pos, s2);
                pos = content.find(s1);
            }
            outputFile << content;
            outputFile.close();
        }
        else
            std::cerr << "Empty file" << std::endl;
    }
    else
    {
        std::cerr << "Can't open file" << std::endl;
        exit(0);
    }
}
