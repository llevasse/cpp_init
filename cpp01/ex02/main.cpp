/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:29:06 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/07 00:52:45 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int	main()
{
	std::string hi = "HI THIS IS BRAIN";
	std::string * stringPTR = &hi;
	std::string & stringREF = hi;

	std::cout << "string           address : " << &hi << std::endl;
	std::cout << "string reference address : " << &stringREF << std::endl;
	std::cout << "string   pointer address : " << &stringPTR << std::endl;
	return (0);
}
