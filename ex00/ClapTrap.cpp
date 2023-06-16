/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:51:31 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:51:33 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0){
	std::cout<<  "ClapTrap " << _name << " Has been constructed" <<  std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &source) : _name(source._name), _hitPoint(source._hitPoint), _energyPoint(source._energyPoint), _attackDamage(source._attackDamage) {
	std::cout << "ClapTrap " << this->_name << " has been copy constructed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &source) {
	if (this == &source)
		return *this;

	_name = source._name;
	_hitPoint = source._hitPoint;
	_energyPoint = source._energyPoint;
	_attackDamage = source._attackDamage;

	std::cout << "ClapTrap " << _name << " Has been assigned" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout<< "ClapTrap " << _name << " Has been terminated" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (_energyPoint > 0) {
		std::cout << "ClapTrap " <<_name << " attacks " <<target<< " causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoint--;
	}
	else {
		std::cout << "Claptrap " << _name <<" Has no energy left to attack" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoint > amount){
		_hitPoint -= amount;
		std::cout<< "ClapTrap " << _name << "takes " << amount << " points of damage" <<std::endl;
	}
	else {
		_hitPoint = 0;
		std::cout << "ClapTrap " << _name << " has been knocked out" <<std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoint > 0) {
		_hitPoint += amount;
		_energyPoint--;
		std::cout<<"ClapTrap " << _name << " repairs itself recovering " << amount << " hit points!" <<std::endl;
	}
	else {
		std::cout <<"ClapTrap " << _name <<" Has no energy left to repair itself" <<std::endl;
	}
}

