/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:37:39 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/05 11:05:43 by llevasse         ###   ########.fr       */
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
	unsigned long	i = 0;
	if (str.length() > width)
	{
		for (; i < width - 1; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	else if (str.length() == width)
		std::cout << str;
	else
	{
		for (; i <= str.length(); i++)
			std::cout << str[i];
		for (; i <= width; i++)
			std::cout << " ";
	}
}

void PhoneBook::search(){
	int	search;

	printWidth("|Id", 11);
	printWidth("|First name", 11);
	printWidth("|Last name", 11);
	printWidth("|Nickname", 11);
	std::cout << "|" << std::endl;
	for	(int i = 0; i < 8; i++)
	{
		std::cout << "|" << i << "         |";
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
	std::cin >> search;
	while (search < 0 || search >= effective_len)
	{
		std::cout << "Invalid index, try again :";
		std::cin >> search;
	}
	if (search >= 0 && search < effective_len)
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
