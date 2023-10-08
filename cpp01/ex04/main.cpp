/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:03:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/08 14:06:09 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv){
	if (argc != 4)
		{ std::cout << "Invalid number of arguments" << std::endl; return 1;}
	(void)argv;
	return 0;
}
