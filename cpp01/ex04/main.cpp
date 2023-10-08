/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:03:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/08 16:13:28 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replace(std::string line, std::string s1, std::string s2){
	int	i;
	while (line.find(s1) != std::string::npos)
	{
		i = line.find(s1);
		line.erase(i, s1.length());
		line.insert(i, s2);
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
		outf << replace(line + "\n", argv[2], argv[3]);
	}
	inf.close();
	outf.close();
	return 0;
}
