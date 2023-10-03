/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:38:09 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/03 22:59:06 by llevasse         ###   ########.fr       */
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
		void setFirstName(std::string name);
		void setLastName(std::string name);
		void setNickName(std::string name);
		void setNumber(std::string number);
		void setSecret(std::string secret);
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getNumber();
		std::string getSecret();
		Contact();
		~Contact();
}

#endif
