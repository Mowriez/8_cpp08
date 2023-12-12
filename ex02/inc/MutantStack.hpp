/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 01:28:35 by mtrautne          #+#    #+#             */
/*   Updated: 2023/12/12 02:15:55 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T> {
  public:
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack& other);
    MutantStack&  operator=(const MutantStack& other);
    
    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin() {
      return std::stack<T>::c.begin();
    }

    iterator end() {
        return std::stack<T>::c.end();
    }
};

#include "../src/MutantStack.tpp"

#endif
