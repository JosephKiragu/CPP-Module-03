/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:52:19 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:52:20 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
	ScavTrap scavTrap1("ST1");

	scavTrap1.attack("Target1");
	scavTrap1.takeDamage(30);
	scavTrap1.beRepaired(20);
	scavTrap1.guardGate();

	return 0;
}