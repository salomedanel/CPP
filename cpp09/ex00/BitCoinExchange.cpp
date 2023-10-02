/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:22:44 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/02 16:18:46 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitCoinExchange.hpp"

BitCoinExchange::BitCoinExchange() {
}

BitCoinExchange::BitCoinExchange(BitCoinExchange const &src) {
    *this = src;
}

BitCoinExchange &BitCoinExchange::operator=(BitCoinExchange const &src) {
    if (this != &src) {
        _map = src._map;
    }
    return (*this);
}

BitCoinExchange::~BitCoinExchange() {
}

void    BitCoinExchange::getData(std::ifstream &file) {
    
    std::string line;
    while (std::getline(file, line)) {
        int pos = line.find(',');
        std::string rate = line.substr(pos + 1);
        _map[line.substr(0, pos)] = toFloat(rate);
    }
//    std::map<std::string, float>::iterator it = _map.begin();
//     for (; it != _map.end(); it++)
//         std::cout << "date : " << it->first << " | rate  : " << it->second << std::endl;
    file.close();
}


float  BitCoinExchange::toFloat(std::string &rate) {
    std::istringstream iss(rate);
    float num = 0;
    iss >> num;
    return (num);
}

bool    BitCoinExchange::isDigit(char c) {
    if (c >= '0' && c <= '9')
        return (true);
    return (false);
}

bool    BitCoinExchange::isDateFormatValid(std::string &date) {
    
    if (date.empty())
        return (false);
    size_t hyphen00, hyphen01 = 0;
    hyphen00 = date.find('-');
    if (hyphen00 != 4)
        return (false);
    hyphen01 = date.find('-', hyphen00 + 1);
    if (hyphen01 != 7)
        return (false);
    for (size_t i = 0; i < date.size() - 1; i++) {
        if (i != hyphen00 && i != hyphen01 && isDigit(date[i]) == false)
            return (false);
    }
    return (true);
}

bool    BitCoinExchange::isDateValid(std::string &date) {
    std::string year = date.substr(0, 4);
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);
    if (year.size() != 4 || month.size() != 2 || day.size() != 2)
        return (false);
    if (year < "2009")
        return (false);
    if (year == "2009" && month == "01" && day < "02")
        return (false);
    if (month < "01" || month > "12")
        return (false);
    if ((month == "01" || month == "03" || month == "05" || month == "07" || month == "08" || month == "10" || month == "12") && (day > "31" || day < "01"))
        return (true);
    if ((month == "04" || month == "06" || month == "09" || month == "11") && (day < "01" || day > "30"))
        return (false);
    if ((day < "01" || day > "28") && (month == "02"))
        return (false);
    return (true);
}

bool    BitCoinExchange::isValueFormatValid(float &value) {
    if (value < 0 || value > 10000)
        return (false);
    return (true);
}

// parse date
// verifier qu'il y ait bien le format YYYY-MM-DD (4 chiffres - 2 chiffres - 2 chiffres)
// verifier que MM soit entre 01 et 12
// verifier que DD soit entre 01 et 31
// verifier que YYYY soit apres 2009