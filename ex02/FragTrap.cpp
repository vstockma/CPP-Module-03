/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:00:52 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/23 15:36:20 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string new_name)
{
    if (new_name.empty())
        _name = "Empty";
    else
        _name = new_name;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(void)
{
    _name = "Default";
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
    _name = copy. _name;
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout  << "FragTrap Destructor called" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    if (_hit_points < 1)
    {
        std::cout << "No one to high five cause " << _name << " is dead" << std::endl;
        return ;
    }
    std::cout << "FragTrap high fives" << std::endl;
}
