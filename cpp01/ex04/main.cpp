/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:03:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/08 15:11:43 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv){
	if (argc != 4)
		{ std::cout << "Invalid number of arguments" << std::endl; return 1;}
	std::string const out_name = argv[1] + std::string(".replace");
	std::ofstream	outf;
	outf.open(out_name.c_str());

	std::ifstream inf(argv[1]);
	std::string line;
	while (getline(inf, line)){
		outf << line << std::endl;
	}
	inf.close();
	outf.close();
	return 0;
}
