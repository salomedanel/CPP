/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdanel <sdanel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:25:29 by sdanel            #+#    #+#             */
/*   Updated: 2023/09/27 14:09:27 by sdanel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    std::cout << "\033[1;35;4mMutantStack\033[0m" << std::endl;
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    
    std::cout << "Stack top : " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Stack size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    std::cout << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    
    std::cout << "\033[4mDisplay stack content with an iterator\033[0m" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    
    std::cout << std::endl;
    std::cout << "\033[1;35;4mList\033[0m" << std::endl;
	std::list<int> list;
    
	list.push_back(5);
	list.push_back(17);
    
	std::cout << "Stack top : " << list.back() << std::endl;
	list.pop_back();
	std::cout << "Stack size : "<< list.size() << std::endl;
    
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
    
    std::cout << std::endl;
	std::list<int>::iterator it2 = list.begin();
	std::list<int>::iterator ite2 = list.end();
    
    std::cout << "\033[4mDisplay stack content with an iterator\033[0m" << std::endl;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
    return 0;
}
