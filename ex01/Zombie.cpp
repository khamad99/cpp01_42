/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:39:27 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/13 14:02:13 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "<" << this->_name << "> is dead" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->_name = name;
}
