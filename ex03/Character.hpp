/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:57:45 by lperez-h          #+#    #+#             */
/*   Updated: 2024/12/04 12:02:08 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory[4];
		AMateria* _ground[8];
	
	public:
		Character();
		Character(const std::string& name);
		Character(const Character& input);
		Character& operator=(const Character& input);
		~Character();
		
		//getter
		const std::string& getName() const;
		const std::string& getInventory(int n) const;

		//member functions
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif