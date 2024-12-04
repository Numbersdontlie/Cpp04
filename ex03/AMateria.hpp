/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:19:19 by luifer            #+#    #+#             */
/*   Updated: 2024/12/04 22:57:00 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>

#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define GREEN "\e[1;92m"
#define RESET "\033[0m"

//Forward declaration of the class ICharacter
//this is done to avoid circular dependencies
class ICharacter;

class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria();
        AMateria(const std::string& type);
        AMateria(const AMateria& input);
        AMateria& operator=(const AMateria& input);
        virtual ~AMateria();
		
		//getter
        const std::string& getType() const;
		
		//pure virtual functions
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
};

#endif