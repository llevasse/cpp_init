/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 01:09:50 by llevasse          #+#    #+#             */
/*   Updated: 2024/01/04 14:36:13 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){

	try{
		ShrubberyCreationForm a;
		Bureaucrat Elise("Elise", 3);
		std::cout << std::endl;
		Elise.signForm(a);
		std::cout << std::endl;
		Elise.executeForm(a);
		std::cout << std::endl;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
		std::cerr << std::endl;
	}
/*	try{
		RobotomyRequestForm a;
		Bureaucrat Elise("Elise", 3);
		std::cout << std::endl;
		Elise.signForm(a);
		std::cout << std::endl;
		Elise.executeForm(a);
		std::cout << std::endl;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
		std::cerr << std::endl;
	}
	try{
		PresidentialPardonForm a;
		Bureaucrat Elise("Elise", 3);
		std::cout << std::endl;
		Elise.signForm(a);
		std::cout << std::endl;
		Elise.executeForm(a);
		std::cout << std::endl;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
		std::cerr << std::endl;
	}*/
}
