/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:41:31 by lperez-h          #+#    #+#             */
/*   Updated: 2024/12/04 23:19:25 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

//Default constructor
MateriaSource::MateriaSource(){
	for(int i = 0; i < 4; i++)
		_materias[i] = NULL;
	std::cout << BLUE << " 🎇 🎇 🎇MateriaSource default created" << RESET << std::endl;
}

//Copy constructor
MateriaSource::MateriaSource(const MateriaSource& input){
	for(int i = 0; i < 4; i++){
		if (!input._materias[i])
			_materias[i] = NULL;
		else
			_materias[i] = input._materias[i]->clone();
	}
	std::cout << BLUE << " 🎇 🎇 🎇MateriaSource copy created" << RESET << std::endl;
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
	std::cout << BLUE << " 🎇 🎇 🎇 MateriaSource overload operator created " << RESET << std::endl;
	return *this;
}

//Destructor
MateriaSource::~MateriaSource(){
	for(int i = 0; i < 4; i++){
		if (_materias[i])
			delete _materias[i];
	}
	std::cout << RED << " 💥 💥 💥MateriaSource destroyed" << RESET << std::endl;
}

//Learn a new materia
void MateriaSource::learnMateria(AMateria* m){
	for(int i = 0; i < 4; i++){
		if (!_materias[i]){
			_materias[i] = m;
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
	return NULL;
}

//getter
const std::string& MateriaSource::getMaterialType(int n) const{
	//return empty string if invalid
	static const std::string empty = "";
	if(n >= 0 && n < 4 && _materias[n]){
		return _materias[n]->getType();
	}
	return (empty);
}
