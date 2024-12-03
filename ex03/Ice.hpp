/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:24:42 by luifer            #+#    #+#             */
/*   Updated: 2024/12/03 20:30:23 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define GREEN "\e[1;92m"
#define RESET "\033[0m"

class Ice: public AMateria
{
    public:
        Ice();
        Ice(const Ice& input);
        Ice& operator=(const Ice& input);
        ~Ice();

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif