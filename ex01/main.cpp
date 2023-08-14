/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:05:48 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/13 14:06:14 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int     main(void)
{
    Zombie  *zombies;

    zombies = zombieHorde(5, "Zombie");
    for (int i = 0; i < 5; i++)
        zombies[i].announce();
    delete [] zombies;
    return (0);
}
