/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:53:15 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:53:17 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &source);
	~FragTrap();

	void attack(const std::string &name);
	void highFiveGuys(void);
};

#endif