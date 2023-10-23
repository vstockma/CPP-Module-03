/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:42:03 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/23 15:17:10 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string new_name)
{
    if (new_name.empty())
        _name = "Empty";
    else
        _name = new_name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
    std::cout << _name << " Constructor called" << std::endl;
}

ClapTrap::ClapTrap(void)
{
    _name = "Default";
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
    _name = copy. _name;
    _hit_points = copy._hit_points;
    _energy_points = copy._energy_points;
    _attack_damage = copy._attack_damage;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << _name << " Destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (_energy_points < 1)
    {
        std::cout << _name << " doesn't have any enerypoints left" << std::endl;
        return ;
    }
    else if (_hit_points < 1)
    {
        std::cout << _name << " is dead" << std::endl;
        return ;
    }
    std::cout << _name << " attacks " << target << " causing " << _attack_damage << " points of damage" << std::endl; 
    _energy_points--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_energy_points < 1)
    {
        std::cout << _name << " doesn't have any enerypoints left" << std::endl;
        return ;
    }
    else if (_hit_points < 1)
    {
        std::cout << _name << " is dead" << std::endl;
        return ;
    }
    std::cout << _name << " took " << amount <<" points of damage" << std::endl; 
    _hit_points -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_points < 1)
    {
        std::cout << _name << " doesn't have any enerypoints left" << std::endl;
        return ;
    }
    else if (_hit_points < 1)
    {
        std::cout << _name << " is dead" << std::endl;
        return ;
    }
    std::cout << _name << " repairs " << amount << " of his hit points" <<std::endl;
    _hit_points += amount;
}
