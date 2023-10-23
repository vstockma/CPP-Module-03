/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:41:12 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/23 15:25:23 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap player1;
    ScavTrap player2("Hans");
    ScavTrap player3 = player2;
    
    player1.attack("Franz");
    player2.attack("Franz");
    player3.attack("Jürgen");
    player1.takeDamage(10);
    player2.takeDamage(500);
    player1.beRepaired(100);
    player2.beRepaired(2);
    player1.guardGate();
    player2.guardGate();
    return 0;
}