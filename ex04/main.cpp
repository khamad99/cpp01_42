/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:30:46 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/14 11:49:42 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: ./replace <filename> <string_to_replace> <string_to_replace_with>" << std::endl;
        return (1);
    }
    Sed sed(argv[1], argv[2], argv[3]);
    sed.replace();
    return (0);
}