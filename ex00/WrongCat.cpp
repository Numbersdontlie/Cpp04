/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:03:59 by luifer            #+#    #+#             */
/*   Updated: 2024/12/03 12:20:18 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//Default constructor
WrongCat::WrongCat() : WrongAnimal(), _type("WrongCat"){
	std::cout << BLUE << " WrongCat object from default constructor created " << RESET << std::endl;
}

//Copy constructor
WrongCat::WrongCat(const WrongCat& input) : WrongAnimal(input){
	std::cout << BLUE << " WrongCat object from copy constructor created " << RESET << std::endl;
}

//Operator overload constructor
WrongCat& WrongCat::operator=(const WrongCat& input){
	if (this != input)
		WrongAnimal::operator=(input);
	std::cout << BLUE << " WrongCat object from operator overload constructor created " << RESET << std::endl;
	return (*this);
}

//Destructor
WrongCat::~WrongCat(){
	std::cout << RED << " 😿 😿 😿 Wrong Cat destroyed" << RESET << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << GREEN << " 🦍 🦍 🦍 Wrong Cat says: HU HU HU HU HA HA HA HA" << RESET << std::endl;
}