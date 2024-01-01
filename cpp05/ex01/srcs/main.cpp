/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 01:09:50 by llevasse          #+#    #+#             */
/*   Updated: 2024/01/01 14:55:10 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
		
	try{
		Form a;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}
