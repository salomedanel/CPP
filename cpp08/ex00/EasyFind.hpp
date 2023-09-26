/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:17:31 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/26 16:04:59 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>

int easyFind(T &container, int i) {
    
    typename T::iterator it = container.begin(); // pointe sur le premier élément du conteneur
    if (it == find(container.begin(), container.end(), i)) { // renvoie un pointeur sur l'élément trouvé ou sur end() si non trouvé
        std::cout << "Value " << i << " found" << std::endl;
        return (*it);
    }
    else {
        std::cout << "Value " << i << " not found" << std::endl;
        return (1);
    }
}

#endif