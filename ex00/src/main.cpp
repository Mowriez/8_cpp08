/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:50:22 by mtrautne          #+#    #+#             */
/*   Updated: 2023/12/10 18:35:44 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"
#include <vector>
#include <list>

int main() {
  try {
    std::vector<int>  vect;
    std::list<int>  list;
	for (size_t i = 0; i < 5;  i++) {
      vect.push_back(i);
	  list.push_back(i);
	}
    easyfind(vect, 2);
	easyfind(list, 3);
	easyfind(list, 6);
  }
  catch(NotFoundError &e) {
    std::cout << e.what() << std::endl;
  }
}
