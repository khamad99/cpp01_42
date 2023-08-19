/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:27:49 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/19 11:10:46 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
    private:
        void _debug(void);
        void _info(void);
        void _warning(void);
        void _error(void);
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};

typedef void (Harl::* HarlFunc)(void);

//using HarlFunc = void (Harl::* )(void);

#endif