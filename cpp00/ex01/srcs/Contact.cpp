/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:58:44 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/04 15:42:35 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(){
	std::cout << "Contact constructor called!" << std::endl;
}

Contact::~Contact(){
	std::cout << "Contact destructor called!" << std::endl;
}

void Contact::setFirstName(){
	std::cout << "What is your name contact's name ?" << std::endl;
	std::cin >> firstName;
}

void Contact::setLastName(){
	std::cout << "What is " << firstName << " last name?" << std::endl;
	std::cin >> lastName;
}

void Contact::setNickName(){
	std::cout << "What is " << firstName << " nickname?" << std::endl;
	std::cin >> nickName;
}

void Contact::setNumber(){
	std::cout << "What is " << firstName << " phone number?" << std::endl;
	std::cin >> phoneNumber;
}

void Contact::setSecret(){
	std::cout << "What is " << firstName << " darkest secret?" << std::endl;
	std::cin >> secret;
}

std::string Contact::getFirstName(){
	return firstName;
}

std::string Contact::getLastName(){
	return lastName;
}

std::string Contact::getNickName(){
	return nickName;
}

std::string Contact::getNumber(){
	return phoneNumber;
}

std::string Contact::getSecret(){
	return secret;
}
