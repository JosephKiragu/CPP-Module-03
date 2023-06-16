/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:53:07 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:53:09 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;

	std::cout<< "FragTrap " << name << " Has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &source) : ClapTrap(source) {
	std::cout << "FragTrap " << this->name << "Has been copy constructed" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->name << " sHas been terminated" << std::endl;
}

void FragTrap::attack(const std::string &target) {
    std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFiveGuys(void) {
	std::cout << "FragTrap " << this->name << " requests for a hi-five" << std::endl;
}