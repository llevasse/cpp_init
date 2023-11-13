/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:13:13 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/13 19:33:12 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){
	if (argc >= 2){
		Harl goodOldHarl;
		for (int i=1;i<argc;i++)
			goodOldHarl.complain(argv[i]);
	}
	else{
		std::cout << "harl : \"I need an input, I can't complain about nothing >:(\"" << std::endl;
		std::cout << "Accepted input : {INFO} {WARNING} {DEBUG} {ERROR}" << std::endl;
	}
	return (0);
}
