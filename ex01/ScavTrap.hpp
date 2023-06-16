/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:52:34 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:52:36 by josephkirag      ###   ########.fr       */
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