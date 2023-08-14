/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:49:19 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/14 10:54:02 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPTR = &str;
    std::string &strREF = str;

    std::cout << "str address: " << &str << std::endl;
    std::cout << "strPTR address: " << strPTR << std::endl;
    std::cout << "strREF address: " << &strREF << std::endl;

    std::cout << "str value: " << str << std::endl;
    std::cout << "strPTR value: " << *strPTR << std::endl;
    std::cout << "strREF value: " << strREF << std::endl;

    return (0);
}