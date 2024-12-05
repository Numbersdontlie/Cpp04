/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 23:24:23 by luifer            #+#    #+#             */
/*   Updated: 2024/12/05 14:31:51 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

//Default constructor
Animal::Animal() : _type("Animal"){
    std::cout << BLUE << " Animal from default constructor created" << RESET << std::endl;
}

//Copy constructor
Animal::Animal(const Animal& input) : _type(input._type){
    std::cout << BLUE << " Animal object from copy constructor created" << RESET << std::endl;
}

//Overload operator constructor
Animal& Animal::operator=(const Animal& input){
    if(this != &input)
		_type = input._type;
	std::cout << BLUE << " Animal object from operator overload constructor created" << RESET << std::endl;
    return (*this);
}

//Destructor
Animal::~Animal(){
    std::cout << RED << "Animal " << this->_type << " Was destroyed" <<RESET << std::endl;
}

//Getter of type
std::string Animal::getType() const {return(this->_type);}