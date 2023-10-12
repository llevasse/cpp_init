/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:37:39 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/12 18:39:30 by llevasse         ###   ########.fr       */
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

void	printWidth(std::string str, unsigned long width){
	std::cout << std::setw(width);
	if (str.length() <= width)
		std::cout << str;
	else
		std::cout << str.substr(0, width - 1) + ".";
}

void PhoneBook::search(){
	std::string	input;
	int			search;

	std::cout << "|";
	printWidth("Id|", 11);
	printWidth("First name|", 11);
	printWidth("Last name|", 11);
	printWidth("Nickname|", 11);
	std::cout << std::endl;
	for	(int i = 0; i < 8; i++)
	{
		std::cout << "|" << "         " << i << "|";
		printWidth(contact[i].getFirstName(), 10);
		std::cout << "|";
		printWidth(contact[i].getLastName(), 10);
		std::cout << "|";
		printWidth(contact[i].getNickName(), 10);
		std::cout << "|" << std::endl;
	}
	if (effective_len == 0)
		return ;
	std::cout << "Search for ? :";
	std::cin >> input;
	while ((input.length() != 1 || input[0] - '0' < 0 || input[0] - '0' >= effective_len) && !std::cin.eof())
	{
		std::cout << "Invalid index, try again :";
		std::cin >> input;
	}
	if (std::cin.eof())
		std::cout << std::endl;
	search = input[0] - '0';
	if (search >= 0 && search < effective_len && !std::cin.eof())
	{
		std::cout << contact[search].getFirstName() << std::endl;
		std::cout << contact[search].getLastName() << std::endl;
		std::cout << contact[search].getNickName() << std::endl;
		std::cout << contact[search].getNumber() << std::endl;
		std::cout << contact[search].getSecret() << std::endl;
	}
}

void PhoneBook::addContact(){
	if (index >= 8)
		index = 0;
	contact[index].setIndex(index);
	if (!std::cin.eof())
		contact[index].setFirstName();
	if (!std::cin.eof())
		contact[index].setLastName();
	if (!std::cin.eof())
		contact[index].setNickName();
	if (!std::cin.eof())
		contact[index].setNumber();
	if (!std::cin.eof())
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
