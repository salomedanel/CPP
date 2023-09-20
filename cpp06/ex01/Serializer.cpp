/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:37:33 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/20 11:44:37 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
}

Serializer::Serializer(const Serializer &src) {
    *this = src;
}

Serializer::~Serializer() {
}

Serializer &Serializer::operator=(const Serializer &src) {
    (void)src;
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
} // converti le pointeur Data en uintptr_t (un unsigned long long int)

Data* Serializer::deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data*>(raw));
} // cette fonction converti le uintptr_t en pointeur Data*
