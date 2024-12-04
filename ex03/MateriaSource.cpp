/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:41:31 by lperez-h          #+#    #+#             */
/*   Updated: 2024/12/04 15:53:32 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

//Default constructor
MateriaSource::MateriaSource(){
	for(int i = 0; i < 4; i++)
		_materias[i] = NULL;
	std::cout << BLUE << " MateriaSource default created" << RESET << std::endl;
}

//Copy constructor
MateriaSource::MateriaSource(const MateriaSource& input){
	for(int i = 0; i < 4; i++){
		if (!input._materias[i])
			_materias[i] = NULL;
		else
			_materias[i] = input._materias[i]->clone();
	}
	std::cout << BLUE << " MateriaSource copy created" << RESET << std::endl;
}

//Assignment operator overload
MateriaSource& MateriaSource::operator=(const MateriaSource& input){
	for(int i = 0; i < 4; i++){
		if (_materias[i])
			delete _materias[i];
		if (!input._materias[i])
			_materias[i] = NULL;
		else
			_materias[i] = input._materias[i]->clone();
	}
	std::cout << BLUE << " MateriaSource overload operator created " << RESET << std::endl;
	return *this;
}

//Destructor
MateriaSource::~MateriaSource(){
	for(int i = 0; i < 4; i++){
		if (_materias[i])
			delete _materias[i];
	}
	std::cout << RED << " MateriaSource destroyed" << RESET << std::endl;
}

//Learn a new materia
void MateriaSource::learnMateria(AMateria* input){
	for(int i = 0; i < 4; i++){
		if (!_materias[i]){
			_materias[i] = input;
			return;
		}
	}
}

//Create a new materia
AMateria* MateriaSource::createMateria(const std::string& type){
	for(int i = 0; i < 4; i++){
		if (_materias[i] && _materias[i]->getType() == type)
			return _materias[i]->clone();
	}
	if (type == "ice")
		return new Ice();
	if (type == "cure")
		return new Cure();
	return NULL;
}

