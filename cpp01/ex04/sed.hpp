/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:51:38 by sdanel            #+#    #+#             */
/*   Updated: 2023/08/29 19:18:44 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <string>
#include <ostream>
#include <fstream>
#include <cstdlib>

class sedlosers
{
    private:
        std::string _infile;
        std::string _outfile;
    public:
    sedlosers(std::string filename);
    ~sedlosers();

    void replace(std::string s1, std::string s2);
    
};

#endif