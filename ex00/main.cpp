/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:51:50 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:51:52 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include <iostream>

int main() {
	ClapTrap robot1("Robot1");
	ClapTrap robot2("Robot2");

	robot1.attack("Robot2");
	robot1.takeDamage(5);
	robot1.beRepaired(10);

	ClapTrap robot3 = robot2;

	return 0;
}