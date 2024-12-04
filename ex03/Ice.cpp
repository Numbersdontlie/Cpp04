/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:17:07 by lperez-h          #+#    #+#             */
/*   Updated: 2024/12/04 22:58:25 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

//Default constructor
Ice::Ice() : AMateria("ice") {
	std::cout << BLUE << " Ice default constructor" << RESET << std::endl;
}

//Copy constructor
Ice::Ice(const Ice& input) : AMateria(input) {
	std::cout << BLUE << " Ice copy constructor" << RESET << std::endl;
}

//Operator overload constructor
Ice& Ice::operator=(const Ice& input){
	if(this != &input)
		_type = input._type;
	std::cout << BLUE << " Ice operator overload constructor" << RESET << std::endl;
	return *this;
}

//Destructor
Ice::~Ice() {
	std::cout << RED << " Ice destroyed" << RESET << std::endl;
}

//Clone function
AMateria* Ice::clone() const {
	Ice* clone = new Ice(*this);
	return clone;
}

//Use function
void Ice::use(ICharacter& target) {
	std::cout << GREEN << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}