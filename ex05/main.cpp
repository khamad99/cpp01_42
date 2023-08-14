/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:27:38 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/14 13:58:25 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string level;
   
    while(1)
    {
        std::cout << "Enter a level (debug, info, warning, error): ";
        std::getline(std::cin, level);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            return (0);
        }
        if (level == "debug" || level == "info" || level == "warning" || level == "error")
            break;
        std::cout << "Invalid level." << std::endl;
    }
    Harl harl;
    harl.complain(level);
    return (0);
}
