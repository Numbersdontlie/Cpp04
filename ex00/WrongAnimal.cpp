/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:40:49 by luifer            #+#    #+#             */
/*   Updated: 2024/12/03 11:51:25 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//Default constructor
WrongAnimal::WrongAnimal() : _type("Monkey"){
    std::cout << BLUE << " 🦧 🦧 🦧 Monkey with default constructor created " << RESET << std::endl;
}

//Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& input){
    _type = input._type;
    std::cout << BLUE << " 🦧 🦧 🦧 Monkey with Copy constructor created " << RESET << std::endl;
}

//Overload constructor
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& input){
	if(this != input)
		_type = input._type;
	std::cout << BLUE << " 🦧 🦧 🦧 Monkey with Overload constructor created " << RESET << std::endl;
	return (*this);
}

//Destructor
WrongAnimal::~WrongAnimal(){
	std::cout << RED << " 😿 😿 😿 WrongAnimal destroyed" << RESET << std::endl;
}

//Getter
std::string WrongAnimal::getType() const {return(this->_type);}

//Make sound
void WrongAnimal::makeSound() const{
	std::cout << BLUE << " 🦧 🦧 🦧 Monkey says: HU HU HU HU HA HA HA HA" << RESET << std::endl;
}