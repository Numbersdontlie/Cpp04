/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:18:31 by lperez-h          #+#    #+#             */
/*   Updated: 2024/12/04 12:22:54 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//Default constructor
Character::Character() : _name("no name"){
	for (int i = 0; i < 4; i++){
		_inventory[i] = NULL;
	}
	for (int i = 0; i < 8; i++){
		_ground[i] = NULL;
	}
	std::cout << BLUE << " Default character object created" << RESET << std::endl;
}

//Parameterized constructor
Character::Character(const std::string& name) : _name(name){
	for (int i = 0; i < 4; i++){
		_inventory[i] = NULL;
	}
	for (int i = 0; i < 8; i++){
		_ground[i] = NULL;
	}
	std::cout << BLUE << " Character object with parameterized constructor created, name is: " << name << RESET << std::endl;
}

//Copy constructor
Character::Character(const Character& input) : _name(input._name){
	for (int i = 0; i < 4; i++){
		_inventory[i] = input._inventory[i];
	}
}