/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:38:07 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/13 14:05:33 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void announce(void);
        void set_name(std::string name);
};

Zombie  *zombieHorde(int N, std::string name);




#endif