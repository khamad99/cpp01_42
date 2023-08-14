/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:03:59 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/14 11:28:47 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}


void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
