/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:57:07 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/23 15:18:20 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string new_name)
{
    if (new_name.empty())
        _name = "Empty";
    else
        _name = new_name;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(void)
{
    _name = "Default";
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
    _name = copy. _name;
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout  << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    if (_hit_points < 1)
    {
        std::cout << _name << " is dead" << std::endl;
        return ;
    }
    std::cout << "ScavTrap is now in gatekeeper mode" << std::endl;
}