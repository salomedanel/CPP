/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:41:24 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/19 17:27:01 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion() : _char(0), _int(0), _float(0), _double(0), _impossible(false), _str(""), _type(0){
}

ScalarConversion::ScalarConversion(ScalarConversion const &src) {
    *this = src;
}

ScalarConversion::~ScalarConversion() {
}

ScalarConversion &ScalarConversion::operator=(ScalarConversion const &src) {
    
    if (this != &src) {
    _char = src._char;
    _int = src._int;
    _float = src._float;
    _double = src._double;
    _str = src._str;
    _type = src._type;
    }
    return *this;
}

// getter

char ScalarConversion::getChar() const {
    return _char;
}

int ScalarConversion::getInt() const {
    return _int;
}

float ScalarConversion::getFloat() const {
    return _float;
}

double ScalarConversion::getDouble() const {
    return _double;
}

std::string ScalarConversion::getStr() const {
    return _str;
}

int ScalarConversion::getType() const {
    return _type;
}

// setter
void    ScalarConversion::setChar(char c) {
    _char = c;
}

void    ScalarConversion::setInt(int i) {
    _int = i;
}

void    ScalarConversion::setFloat(float f) {
    _float = f;
}

void    ScalarConversion::setDouble(double d) {
    _double = d;
}

void    ScalarConversion::setStr(std::string str) {
    _str = str;
    this->findType();
    if (this->getType() == NONE)
        throw ScalarConversion::ImpossibleException();
    return ;
}

void    ScalarConversion::setType(int type) {
    _type = type;
}

// methods

bool ScalarConversion::isChar() {
    if (this->getStr().length() == 1 && !isdigit(this->getStr()[0]))
        return true;
    return false;
}

bool ScalarConversion::isInt() {
    int	i = 0;
	if (this->_str[i] == '+' || this->_str[i] == '-')
		i++;
	for (int j = i; j < (int)this->_str.length(); j++) {
		if (!isdigit(this->_str[j]))
			return false;
	}
	return true;
}

bool ScalarConversion::isFloat() {
    int	i = 0;
	if (this->_str[i] == '+' || this->_str[i] == '-')
		i++;
	if (this->_str[_str.length() - 1] == 'f')
	{
		for (int j = i; j < (int) this->_str.length(); j++) {
			if (!isdigit(this->_str[j])) {
				if (this->_str[j] == '.')
					return true;
				return false;
			}
		}
	}
	return false;
}

bool ScalarConversion::isDouble() {
	int	i = 0;
	if (this->_str[i] == '+' || this->_str[i] == '-')
		i++;
	for (int j = i; j < (int) this->_str.length(); j++) {
		if (!isdigit(this->_str[j])) {
			if (this->_str[j] == '.')
				return true;
			return false;
		}
	}
	return false;
}

bool ScalarConversion::isNanInf() const {
    if (this->_str.compare("-inff") == 0 || this->_str.compare("+inff") == 0 
    || this->_str.compare("nanf") == 0 || this->_str.compare("-inf") == 0 
    || this->_str.compare("+inf") == 0 || this->_str.compare("nan") == 0)
        return true;
    return false;   
}

void ScalarConversion::findType() {
    if (isChar() == true)
        this->_type = CHAR;
    else if (isInt() == true)
        this->_type = INT;
    else if (isFloat() == true)
        this->_type = FLOAT;
    else if (isDouble() == true)
        this->_type = DOUBLE;
    else if (isNanInf() == true)
        this->_type = NAN_INF;
    else
        this->_type = NONE;
}

void		ScalarConversion::convertInput()
{
	if (isImpossible())
	{
		std::cout << "impossible : " << this->_impossible << std::endl;
		return ;
	}
	if (this->_type == CHAR)
	{
		this->_char = this->_str[0];
		this->_int = static_cast<int>(this->_char);
		this->_float = static_cast<float>(this->_char);
		this->_double = static_cast<double>(this->_char);
	}
	else if (this->_type == INT)
	{
		this->_char = static_cast<char>(this->_int);
		std::istringstream(this->_str) >> this->_int;
		this->_float = static_cast<float>(this->_int);
		this->_double = static_cast<double>(this->_int);
	}
	else if (this->_type == FLOAT)
	{
		this->_char = static_cast<char>(this->_float);
		this->_int = static_cast<int>(this->_float);
		std::istringstream(this->_str) >> this->_float;
		this->_double = static_cast<double>(this->_float);
	}
	else if (this->_type == DOUBLE)
	{
		this->_char = static_cast<char>(this->_double);
		this->_int = static_cast<int>(this->_double);
        this->_float = static_cast<float>(this->_double);
		std::istringstream(this->_str) >> this->_double;
    }
	return ;
}

bool		ScalarConversion::isImpossible() {
	try
	{
		if (_type == INT)
			std::istringstream(_str) >> _int; // convert string to int
		else if (_type == FLOAT)
			std::istringstream(_str) >> _float;
		else if (_type == DOUBLE)
			std::istringstream(_str) >> _double;
	}
	catch (std::exception &e)
	{
		_impossible = true;
        std::cout << "impossible = " << _impossible << std::endl;
		return true;
	}
	return false;
}

void ScalarConversion::printChar() const {
    std::cout << "char: ";
	    if (this->_impossible || this->_type == NAN_INF || this->_int > 127)
		    std::cout << "impossible" << std::endl;
	else if (std::isprint(this->_char))
		std::cout << this->_char << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	return ;    
}

void ScalarConversion::printInt()const {
    std::cout << "int: ";
	if (this->_impossible || this->_type == NAN_INF)
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->_int << std::endl;
	return ;    
}

void		ScalarConversion::printFloat() const {
	std::cout << "float: ";
	if (!this->_str.compare("nan") || !this->_str.compare("nanf"))
		std::cout << "nanf" << std::endl;
	else if (!this->_str.compare("+inf") || !this->_str.compare("+inff"))
		std::cout << "+inff" << std::endl;
	else if (!this->_str.compare("-inf") || !this->_str.compare("-inff"))
		std::cout << "-inff" << std::endl;
	else if (this->_float - static_cast<int>(this->_float) == 0.0)
		std::cout << this->_float << ".0f" << std::endl;
	else
		std::cout << this->_float << "f" << std::endl;
	return ;
}

void		ScalarConversion::printDouble() const {
	std::cout << "double : ";
	if (!this->_str.compare("nan") || !this->_str.compare("nanf"))
		std::cout << "nan" << std::endl;
	else if (!this->_str.compare("+inf") || !this->_str.compare("+inff"))
		std::cout << "+inf" << std::endl;
	else if (!this->_str.compare("-inf") || !this->_str.compare("-inff"))
		std::cout << "-inf" << std::endl;
	else if (this->_double - static_cast<int>(this->_double) == 0.0)
		std::cout <<this->_double << ".0" << std::endl;
	else
		std::cout << this->_double << std::endl;
	return ;
}

// exceptions
const char *ScalarConversion::ImpossibleException::what() const throw() {
    return "impossible";
}

std::ostream &operator<<(std::ostream &o, ScalarConversion const &src) {
	src.printChar();
	src.printInt();
	src.printFloat();
	src.printDouble();
	return (o);
}