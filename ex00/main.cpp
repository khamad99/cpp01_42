/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:42:41 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/13 13:49:03 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie;

    zombie = newZombie("Zombie1");
    zombie->announce();
    randomChump("Zombie2");
    delete zombie;
    return (0);
}