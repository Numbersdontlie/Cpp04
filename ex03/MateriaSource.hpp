/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:25:37 by lperez-h          #+#    #+#             */
/*   Updated: 2024/12/04 22:34:14 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>
#include <string>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materias[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& input);
		MateriaSource& operator=(const MateriaSource& input);
		~MateriaSource();

		void learnMateria(AMateria* m);
		AMateria* createMateria(const std::string& type);
		const std::string& getMaterialType(int n) const;

};

#endif