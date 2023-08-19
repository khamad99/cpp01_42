/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:03:59 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/18 10:57:06 by kalshaer         ###   ########.fr       */
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
    if (this->_weapon == NULL)
        std::cout << this->_name << " has no weapon" << std::endl;
    else if (this->_weapon->getType() == "" || this->_weapon->getType() == " ")
        std::cout << this->_name << " has no weapon" << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}


void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
