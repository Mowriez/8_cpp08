/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:15:00 by mtrautne          #+#    #+#             */
/*   Updated: 2023/12/10 18:40:53 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>

class NotFoundError : std::exception {
	public:
		const char* what() const throw() {
			return ("Error: Element was not found in the container.");
		}
};

template <typename T>
void easyfind(T container, int argToFind) {
  typename T::iterator	it;
  for (it = container.begin(); it != container.end(); it++) {
    if (*it == argToFind) {
      std::cout << "Success! " << argToFind << " was found in container at pos "
	    << distance(container.begin(), it)  << std::endl;
      break;
    }
  }
  if (it == container.end())
      throw NotFoundError();
}

#endif
