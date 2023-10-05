/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:23:03 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/05 17:26:46 by sdanel           ###   ########.fr       */
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
#include <iomanip>

class BitCoinExchange {
    private:
        std::map<std::string, float> _map;
        
    public:
        BitCoinExchange();
        BitCoinExchange(BitCoinExchange const &src);
        BitCoinExchange &operator=(BitCoinExchange const &src);
        ~BitCoinExchange();

        //methods
        void    getData(std::ifstream &file);
        float   toFloat(std::string &rate);
        float   findRate(std::string &key);
        
        bool    isDateFormatValid(std::string &date);
        bool    isDateValid(std::string &date);
        bool    isDigit(char c);
        bool    isValueFormatValid(float &value);
        
        //exceptions
        class NegativeValue: public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class OnlyDigitException: public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class TooLargeValueException: public std::exception {
            public:
                virtual const char *what() const throw();
        };
        
};

#endif
