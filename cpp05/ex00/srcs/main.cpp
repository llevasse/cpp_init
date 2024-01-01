/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 01:09:50 by llevasse          #+#    #+#             */
/*   Updated: 2024/01/01 13:29:16 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
		
	try{
		Bureaucrat recruit;
		std::cout << recruit.getGrade() << std::endl;
		recruit.decrementGrade();
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	try{
		Bureaucrat recruit(1);
		std::cout << recruit << std::endl;
		recruit.incrementGrade();
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	
	try{
		Bureaucrat recruit(0);;
		std::cout << recruit.getGrade() << std::endl;
		recruit.decrementGrade();
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	
	try{
		Bureaucrat recruit(151);
		std::cout << recruit.getGrade() << std::endl;
		recruit.decrementGrade();
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}

}
