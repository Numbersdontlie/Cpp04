/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:33:42 by luifer            #+#    #+#             */
/*   Updated: 2024/12/04 12:18:21 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

//Default constructor
AMateria::AMateria() : _type("default"){
	std::cout << GREEN << "AMateria object with default constructor created" << RESET << std::endl;
}

//Parameterized constructor
AMateria::AMateria(const std::string& type) : _type(type){
	std::cout << GREEN << "AMateria object with parameterized constructor created, type is: " << type << RESET << std::endl;
}

//Copy constructor
AMateria::AMateria(const AMateria& input) : _type(input._type){
	std::cout << GREEN << "AMateria object with copy constructor created" << RESET << std::endl;
}

//Operator overload constructor
AMateria& AMateria::operator=(const AMateria& input){
	if (this != &input)
		this->_type = input._type;
	std::cout << GREEN << "AMateria object with operator overload constructor created" << RESET << std::endl;
	return (*this);
}

//Destructor
AMateria::~AMateria(){
	std::cout << RED << "AMateria object destroyed" << RESET << std::endl;
}

//Getter
const std::string& AMateria::getType() const {return (this->_type); }

void AMateria::use(ICharacter& target){
	std::cout << GREEN << "* uses materia on " << target.getName() << RESET << std::endl;
}
