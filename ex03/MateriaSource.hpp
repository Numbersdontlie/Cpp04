/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:25:37 by lperez-h          #+#    #+#             */
/*   Updated: 2024/12/04 15:41:07 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materias[4];
		int idx;

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& input);
		MateriaSource& operator=(const MateriaSource& input);
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(const std::string& type);
		AMateria* getMateria(int n) const;
		AMateria* cloneMateria(int n) const;
};

#endif