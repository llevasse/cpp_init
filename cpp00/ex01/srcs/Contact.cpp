/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:58:44 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/04 13:07:33 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(){
	std::cout << "Contact constructor called!" << std::endl;
}

Contact::~Contact(){
	std::cout << "Contact destructor called!" << std::endl;
}

int	main()
{
	Contact cc;
	return 0;
}
