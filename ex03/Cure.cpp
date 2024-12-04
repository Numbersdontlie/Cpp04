/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:00:53 by lperez-h          #+#    #+#             */
/*   Updated: 2024/12/04 15:16:49 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//Default constructor
Cure::Cure() : AMateria("cure") {
	std::cout << BLUE << " Cure object with default constructor" << RESET << std::endl;
}

//Copy constructor
Cure::Cure(const Cure &cure) {
	_type = cure._type;
	std::cout << BLUE << " Cure object with type provided created" << RESET << std::endl;
}

//Operator overload constructor
Cure& Cure::operator=(const Cure &input) {
	if(this != &input)
		_type = input._type;
	std::cout << BLUE << " Cure object with operator overload created" << RESET << std::endl;
	return *this;
}

//Destructor
Cure::~Cure(){
	std::cout << RED << " Cure object destroyed" << RESET << std::endl;
}

//Clone function
AMateria* Cure::clone() const {
	Cure *clone = new Cure(*this);
	return clone;
}

//Use function
void Cure::use(ICharacter &target) {
	std::cout << GREEN << "* heals " << target.getName() << "’s wounds *" << RESET << std::endl;
}