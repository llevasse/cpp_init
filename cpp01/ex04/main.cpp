/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:03:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/13 19:28:08 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	replace(std::string line, std::string s1, std::string s2){
	int	i=0;
	while (line.find(s1,i) != std::string::npos)
	{
		i = line.find(s1,i);
		line.erase(i, s1.length());
		line.insert(i, s2);
		i += s2.length();
	}
	return (line);
}

int	main(int argc, char **argv){
	if (argc != 4)
		{ std::cout << "Invalid number of arguments" << std::endl; return 1;}
	if (!argv[2][0])
		{ std::cout << "Invalid first argument" << std::endl; return 1;}
	std::string const out_name = argv[1] + std::string(".replace");
	std::ofstream	outf;
	outf.open(out_name.c_str());
	if (!outf.is_open()){
		std::cout << "Error in opening output file!" << std::endl; return 1;}

	std::ifstream inf(argv[1]);
	if (!inf.is_open()){
		std::cout << "Error in opening input file!" << std::endl; outf.close(); return 1;}
	std::string line;
	while (getline(inf, line)){
		outf << replace(line + "\n", argv[2], argv[3]);
	}
	inf.close();
	outf.close();
	return 0;
}
