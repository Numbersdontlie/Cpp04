/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:00:53 by lperez-h          #+#    #+#             */
/*   Updated: 2024/12/04 22:53:18 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

//Default constructor
Cure::Cure() : AMateria("cure") {
	std::cout << BLUE << " Cure object with default constructor" << RESET << std::endl;
}

//Copy constructor
Cure::Cure(const Cure &cure) : AMateria(cure._type) {
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