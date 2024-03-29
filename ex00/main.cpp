/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:41:12 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/23 14:37:53 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap player1;
    ClapTrap player2("Hans");
    
    player1.attack("Franz");
    player2.attack("Franz");
    player1.takeDamage(10);
    player2.takeDamage(5);
    player1.beRepaired(100);
    player2.beRepaired(2);
    return 0;
}