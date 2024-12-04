/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:18:31 by lperez-h          #+#    #+#             */
/*   Updated: 2024/12/04 22:47:34 by luifer           ###   ########.fr       */
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
		if(input._inventory[i] == NULL)
			_inventory[i] = NULL;
		else
			_inventory[i] = input._inventory[i]->clone();
	}
	std::cout << BLUE << " Character object with copy constructor created " << RESET << std::endl;
}

//Assignment operator overload
Character& Character::operator=(const Character& input){
	for (int i = 0; i < 4; i++){
		if(_inventory[i])
			delete _inventory[i];
		if (input._inventory[i] == NULL)
			_inventory[i] = NULL;
		else
			_inventory[i] = input._inventory[i]->clone();
	}
	_name = input._name;
	std::cout << BLUE << " Character object with operator overload constructor created " << RESET << std::endl;
	return (*this);
}

//Destructor
Character::~Character(){
	for (int i = 0; i < 4; i++){
		if(!_inventory[i]){
			delete _inventory[i];
		}
	}
	std::cout << RED << " Character object destroyed" << RESET << std::endl;
}

//Getter for name
const std::string& Character::getName() const {return (_name); }

//Getter for inventory
const std::string& Character::getInventory(int n) const {
	static const std::string empty = "";
	if (n < 0 || n > 3){
		std::cout << RED << " Invalid index, provide a right index" << RESET << std::endl;
		return empty;
	}
	if(_inventory[n])
		return (_inventory[n]->getType());
	std::cout << RED << " No materia at this index" << RESET << std::endl;
	return empty;
}

//Equip function
void Character::equip(AMateria* m){
	for(int i = 0; i < 4; i++){
		if(!_inventory[i]){
			_inventory[i] = m;
			std::cout << GREEN << " Materia equipped" << RESET << std::endl;
			return ;
		}
	}
	std::cout << RED << " Inventory is full young padawan!" << RESET << std::endl;
}

//Unequip function
void Character::unequip(int idx){
	if(idx < 0 || idx > 3){
		std::cout << RED << " Invalid index, provide a right index" << RESET << std::endl;
		return ;
	}
	if(_inventory[idx]){
		std::cout << GREEN << " Materia unequipped" << RESET << std::endl;
		_inventory[idx] = NULL;
		return ;
	}
	std::cout << RED << " No materia at this index" << RESET << std::endl;
}

//Use function
void Character::use(int idx, ICharacter& Target){
	if(_inventory[idx]){
		_inventory[idx]->use(Target);
		return ;
	}
	std::cout << RED << " No materia at this index" << RESET << std::endl;
}
