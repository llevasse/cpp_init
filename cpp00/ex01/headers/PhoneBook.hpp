/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:38:09 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/04 13:24:08 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string secret;

	public:
		void setFirstName();
		void setLastName();
		void setNickName();
		void setNumber();
		void setSecret();
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getNumber();
		std::string getSecret();
		Contact();
		~Contact();
};

class PhoneBook
{
	private:
		Contact contact[8];
	
	public:
		void addContact();
		void search();
		void exit();
		PhoneBook();
		~PhoneBook();
};

#endif
