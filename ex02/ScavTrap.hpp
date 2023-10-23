/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:57:36 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/23 15:12:33 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string new_name);
        ScavTrap(void);
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator=(const ScavTrap& copy);
        ~ScavTrap();
        void guardGate();
};

#endif