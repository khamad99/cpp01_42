/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:37:44 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/14 11:38:52 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>

class Sed
{
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;
        std::string _buffer;
        std::ifstream _ifs;
        std::ofstream _ofs;
    public:
        Sed(std::string filename, std::string s1, std::string s2);
        ~Sed();
        void replace();
};

#endif