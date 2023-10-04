/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:37:39 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/04 16:08:21 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	std::cout << "PhoneBook constructor called!" << std::endl;
	effective_len = 0;
	index = 0;
}

PhoneBook::~PhoneBook(){
	std::cout << "PhoneBook destructor called!" << std::endl;
}

void PhoneBook::search(){
	
}

void PhoneBook::addContact(){
	if (index >= 8)
		index = 0;
	contact[index].setIndex(index);
	contact[index].setFirstName();
	contact[index].setLastName();
	contact[index].setNickName();
	contact[index].setNumber();
	contact[index].setSecret();
	index++;
	if (effective_len < 8)
		effective_len++;
}

int	main(){
	PhoneBook pb;
	std::string input;
	while (1)
	{
		std::cin >> input;
		if (std::cin.eof() || input.compare("EXIT") == 0)
			return (0);
		if (input.compare("SEARCH") == 0)
			pb.search();
		if (input.compare("ADD") == 0)
			pb.addContact();
	}
}
