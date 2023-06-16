/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:53:40 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:53:44 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP


#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &source);
	~ScavTrap();

	void attack(const std::string &target);
	void guardGate();
};

#endif