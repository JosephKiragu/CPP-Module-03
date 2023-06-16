/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:52:26 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:52:27 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &source) : ClapTrap(source) {
	std::cout<< "ScavTrap" << this->name << "Has been created by copy" <<std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap" << this->name << "Has been terminated" <<std::endl;
}

void ScavTrap::attack(const std::string &target) {
	std::cout<< "ScavTrap" << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name <<" Has entered Gatekeeper mode" <<std::endl;
}


