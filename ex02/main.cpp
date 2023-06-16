/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:53:23 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:53:24 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() {
	FragTrap fragTrap1("FT1");

	fragTrap1.attack("Target1");
	fragTrap1.takeDamage(30);
	fragTrap1.beRepaired(20);
	fragTrap1.highFiveGuys();

	return 0;
}