/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:37:39 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/04 15:45:17 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	std::cout << "PhoneBook constructor called!" << std::endl;
}

PhoneBook::~PhoneBook(){
	std::cout << "PhoneBook destructor called!" << std::endl;
}

void PhoneBook::search(){

}

void PhoneBook::addContact(){

}

int	main(){
	std::string input;
	while (1)
	{
		std::cin >> input;
		if (input.compare("EXIT") == 0)
			return (0);
	}
}
