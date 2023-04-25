/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:42:03 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/25 16:10:45 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string new_name)
{
    this->name = new_name;
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
}

void    ClapTrap::attack(const std::string& target)
{
    if (energy_points > 0)
    {
        std::cout << this->name << " attacks " << std::endl << target << " causing" << attack_damage << " poiints of damage" << std::endl; 
        this->energy_points--;
    }
    else
        std::cout << name << " has no energy left!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{

}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_points > 0)
    {
        std::cout << this->name << " repairs " << amount << " of hit points" <<std::endl;
    }
    else
        std::cout << name << " has no energy left!" << std::endl;
}
