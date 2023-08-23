/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:03:59 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/23 07:43:48 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

bool HumanB::_containsOnlySpaces(const std::string& str) const 
{
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isspace(str[i]))
            return false;
    }
    return true;
}

HumanB::HumanB(std::string name) : _name(name)
{
    this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    if (this->_weapon == NULL)
        std::cout << this->_name << " has no weapon" << std::endl;
    else if (this->_weapon->getType() == "" || HumanB::_containsOnlySpaces(this->_weapon->getType()))
        std::cout << this->_name << " has no weapon" << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}


void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
