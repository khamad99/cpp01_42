/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:03:59 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/18 10:15:04 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *zombies = new Zombie[N];
    int     i;

    i = -1;
    while (++i < N)
        zombies[i].set_name(name);
    return (zombies);
}
