/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:22:44 by sdanel            #+#    #+#             */
/*   Updated: 2023/10/05 17:30:27 by sdanel           ###   ########.fr       */
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
        size_t pos = line.find(',');
        std::string rate = line.substr(pos + 1);
        _map[line.substr(0, pos)] = toFloat(rate);
    }
    file.close();
}

// faire des exceptions
float  BitCoinExchange::toFloat(std::string &rate) {
    int i = 0;
    if (rate[i] == ' ')
        i++;
    for (; rate[i]; i++)
        if (isdigit(rate[i]) == false && rate[i] != '.')
            return (-1);
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
    if (year < "2009" || year > "2022")
        return (false);
    if (year == "2022" && month > "03")
        return (false);
    if (year == "2022" && month == "03" && day > "29")
        return (false);
    if (year == "2009" && month == "01" && day < "02")
        return (false);
    if (month < "01" || month > "12")
        return (false);
    if ((month == "01" || month == "03" || month == "05" || month == "07" || month == "08" || month == "10" || month == "12") && (day > "31" || day < "01"))
        return (false);
    if ((month == "04" || month == "06" || month == "09" || month == "11") && (day < "01" || day > "30"))
        return (false);
    if ((day < "01" || day > "28") && (month == "02"))
        return (false);
    return (true);
}

bool    BitCoinExchange::isValueFormatValid(float &value) {
    if (value < 0) {
        std::cout << "Error - Negative value" << std::endl;
        return (false);
    }  
    if(value > 1000) {
        std::cout << "Error - Too large value" << std::endl;
        return (false);
    }
    return (true);
}

float   BitCoinExchange::findRate(std::string &key) {
    if (_map.count(key) > 0) // count le nb key - donc verifie si la date est trouvee
        return (_map.at(key)); // si oui, retourne la valeur associee at cette key
    return (--_map.lower_bound(key))->second; // sinon, cherche la valeur associee a la cle qui est superieur ou egales a key
}


// const char* BitCoinExchange::NegativeValue::what() const throw() {
//     return ("Error - Negative Value");
// }

// const char* BitCoinExchange::OnlyDigitException::what() const throw() {
//     return ("Error - Value must contain only digit");
// }

// const char* BitCoinExchange::TooLargeValueException::what() const throw() {
//     return ("Error - Too large value");
// }