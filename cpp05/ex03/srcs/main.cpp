/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 01:09:50 by llevasse          #+#    #+#             */
/*   Updated: 2024/01/11 11:35:25 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){

	try{
		Intern Sinead;
		Bureaucrat Elise("Elise", 3);
		AForm *form = Sinead.makeForm("shrubbery creation", "me");
		std::cout << std::endl;
		Elise.signForm(*form);
		std::cout << std::endl;
		Elise.executeForm(*form);
		std::cout << *form << std::endl;
		delete form;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
		std::cerr << std::endl;
	}
	try{
		Intern Sinead;
		Bureaucrat Elise("Elise", 3);
		AForm *form = Sinead.makeForm("endOfTheWorld", "me");
		std::cout << std::endl;
		Elise.signForm(*form);
		std::cout << std::endl;
		Elise.executeForm(*form);
		std::cout << *form << std::endl;
		delete form;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
		std::cerr << std::endl;
	}
}
