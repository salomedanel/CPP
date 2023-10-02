/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:23:03 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/02 16:17:59 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>

class BitCoinExchange {
    public:
        BitCoinExchange();
        BitCoinExchange(BitCoinExchange const &src);
        BitCoinExchange &operator=(BitCoinExchange const &src);
        ~BitCoinExchange();

        //methods
        void    getData(std::ifstream &file);
        float  toFloat(std::string &rate);
        
        bool    isDateFormatValid(std::string &date);
        bool    isDateValid(std::string &date);
        bool    isDigit(char c);
        bool    isValueFormatValid(float &value);
    private:
        std::map<std::string, float> _map;
};

#endif
