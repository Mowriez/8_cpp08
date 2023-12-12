/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 01:28:35 by mtrautne          #+#    #+#             */
/*   Updated: 2023/12/12 01:56:04 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <iterator>

template<class T>
class MutantStack : public std::stack<T> {
  public:
    MutantStack() : std::stack<T>() {};
    ~MutantStack() {};
    MutantStack(const MutantStack& other) : std::stack<T>(other) {};
    MutantStack&  operator=(const MutantStack& other) {
      if (this != &other)
        std::stack<T>::operator=(other);
      return (*this);
    };
    
    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin() {
      return std::stack<T>::c.begin();
    }

    iterator end() {
        return std::stack<T>::c.end();
    }
};

#endif
