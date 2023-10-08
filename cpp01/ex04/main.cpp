/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:03:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/08 15:56:30 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replace(std::string line, std::string s1, std::string s2){
	for(unsigned long i = 0; i < line.length(); i++){
		if (line.compare(i, s1.length(), s1) == 0)
		{
			for (unsigned long j = 0; j < s2.length(); j++){
				line[i + j] = s2[j];
			}
			i += s2.length();
		}
	}
	return (line);
}

int	main(int argc, char **argv){
	if (argc != 4)
		{ std::cout << "Invalid number of arguments" << std::endl; return 1;}
	std::string const out_name = argv[1] + std::string(".replace");
	std::ofstream	outf;
	outf.open(out_name.c_str());

	std::ifstream inf(argv[1]);
	std::string line;
	while (getline(inf, line)){
		outf << replace(line, argv[2], argv[3]) << std::endl;
	}
	inf.close();
	outf.close();
	return 0;
}
