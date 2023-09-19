/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:28:17 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/19 17:20:55 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERSION_HPP
# define SCALAR_CONVERSION_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <climits>

#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4
#define NAN_INF 5
#define NONE 6

class ScalarConversion {

    private:
        char _char;
        int _int;
        float _float;
        double _double;

        bool _impossible;
        
        std::string _str;
        int _type; 
        
    public:
        ScalarConversion();
        ScalarConversion(ScalarConversion const &src);
        ScalarConversion &operator=(ScalarConversion const &src);
        ~ScalarConversion();

        // getter
        char getChar() const;
        int getInt() const;
        float getFloat() const;
        double getDouble() const;
        std::string getStr() const;
        int getType() const;
        
        //setter
        void setChar(char c);
        void setInt(int i);
        void setFloat(float f);
        void setDouble(double d);
        void setStr(std::string str);
        void setType(int type);
        
        // methods
        bool isChar();
        bool isInt();
        bool isFloat();
        bool isDouble();
        bool isNanInf() const;
        bool isImpossible();
        
        void findType();
        void convertInput();

        void printChar() const;
        void printInt() const;
        void printFloat() const;
        void printDouble() const;

        // exceptions
        class ImpossibleException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, ScalarConversion const &src);

#endif