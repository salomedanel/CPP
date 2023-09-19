/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:34:09 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/19 17:43:18 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
#include <stdint.h>

typedef struct Data {
    std::string str;
    int         i;
}            Data;

class Serializer {

    private:
    
    public:
        Serializer();
        Serializer(const Serializer &src);
        ~Serializer();
        Serializer &operator=(const Serializer &src);

        // methods
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};

#endif
