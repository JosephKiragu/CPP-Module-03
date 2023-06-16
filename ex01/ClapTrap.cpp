/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:51:59 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:52:01 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoint(10), energyPoint(10), attackDamage(0){
	std::cout<<  "ClapTrap " << name << " Has been constructed" <<  std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &source) : name(source.name), hitPoint(source.hitPoint), energyPoint(source.energyPoint), attackDamage(source.attackDamage) {
	std::cout << "ClapTrap " << this->name << " has been copy constructed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &source) {
	if (this == &source)
		return *this;

	name = source.name;
	hitPoint = source.hitPoint;
	energyPoint = source.energyPoint;
	attackDamage = source.attackDamage;

	std::cout << "ClapTrap " << name << " Has been assigned" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout<< "ClapTrap " << name << " Has been terminated" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (energyPoint > 0) {
		std::cout << "ClapTrap " <<name << " attacks " <<target<< " causing " << attackDamage << " points of damage!" << std::endl;
		energyPoint--;
	}
	else {
		std::cout << "Claptrap " << name <<" Has no energy left to attack" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoint > amount){
		hitPoint -= amount;
		std::cout<< "ClapTrap " << name << "takes " << amount << " points of damage" <<std::endl;
	}
	else {
		hitPoint = 0;
		std::cout << "ClapTrap " << name << " has been knocked out" <<std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoint > 0) {
		hitPoint += amount;
		energyPoint--;
		std::cout<<"ClapTrap " << name << " repairs itself recovering " << amount << " hit points!" <<std::endl;
	}
	else {
		std::cout <<"ClapTrap " << name <<" Has no energy left to repair itself" <<std::endl;
	}
}

