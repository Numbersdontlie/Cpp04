/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:24:42 by luifer            #+#    #+#             */
/*   Updated: 2024/12/04 12:08:59 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

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