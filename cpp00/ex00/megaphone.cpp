/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:39:49 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/03 22:12:01 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	put_str(char *str)
{
	for(int i = 0; str[i]; i++)
		str[i] = std::toupper(str[i]);
	std::cout << str;
}

int	main(int argc, char **argv){
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; argv[i]; i++)
			put_str(argv[i]);
		std::cout << std::endl;
	}
	return 0;
}
