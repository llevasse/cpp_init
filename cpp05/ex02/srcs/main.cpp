/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 01:09:50 by llevasse          #+#    #+#             */
/*   Updated: 2024/01/21 16:50:09 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){

	try{
		ShrubberyCreationForm a("me");
		Bureaucrat Elise("Elise", 3);
		std::cout << std::endl;
		Elise.signForm(a);
		std::cout << std::endl;
		Elise.executeForm(a);
		ShrubberyCreationForm b = a;
		std::cout << b << std::endl;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
		std::cerr << std::endl;
	}
	try{
		RobotomyRequestForm a("bob");
		Bureaucrat Elise("Elise", 3);
		std::cout << std::endl;
		Elise.signForm(a);
		std::cout << std::endl;
		Elise.executeForm(a);
		std::cout << std::endl;
		RobotomyRequestForm b = a;
		std::cout << b << std::endl;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
		std::cerr << std::endl;
	}
	try{
		PresidentialPardonForm a("Edward");
		Bureaucrat Elise("Elise", 3);
		std::cout << std::endl;
		Elise.signForm(a);
		std::cout << std::endl;
		Elise.executeForm(a);
		std::cout << std::endl;
		PresidentialPardonForm b = a;
		std::cout << b << std::endl;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
		std::cerr << std::endl;
	}
	try{
		AForm *toRemove = new PresidentialPardonForm("george");
		delete (toRemove);
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
		std::cerr << std::endl;
	}
}
