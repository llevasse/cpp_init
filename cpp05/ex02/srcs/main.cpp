/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 01:09:50 by llevasse          #+#    #+#             */
/*   Updated: 2024/01/02 22:41:55 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main(){

	try{
		AForm a("valid", 3, 3);
		Bureaucrat Elise("Elise", 3);
		Elise.signAForm(a);
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	try{
		AForm a("valid", 3, 3);
		Bureaucrat Elise("Elise", 5);
		Elise.signAForm(a);
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}
