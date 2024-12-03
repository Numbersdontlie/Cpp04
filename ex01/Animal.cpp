/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 23:24:23 by luifer            #+#    #+#             */
/*   Updated: 2024/12/03 11:21:41 by luifer           ###   ########.fr       */
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
    if(this == &input)
        return (*this);
    _type = input._type;
    return (*this);
}

//Destructor
Animal::~Animal(){
    std::cout << RED << "Animal" << this->_type << " Was destroyed" <<RESET << std::endl;
}

//Function to make sound
void Animal::makeSound() const{
    std::cout << GREEN << " Animal sound 🦗 🐒 🐯 🐼" << RESET << std::endl;
}

//Getter of type
std::string Animal::getType() const {return(this->_type);}