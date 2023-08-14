/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:38:56 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/14 12:17:21 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
}

Sed::~Sed()
{
}

void Sed::replace()
{
    size_t position = 0;

    this->_ifs.open(this->_filename);
    if (!this->_ifs.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return ;
    }
    this->_ofs.open(this->_filename + ".replace");
    if (!this->_ofs.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return ;
    }
    if (!std::getline(this->_ifs, this->_buffer, '\0'))
    {
        std::cout << "Error: empty file" << std::endl;
        return ;
    }
    while ((position = this->_buffer.find(this->_s1)) && (position != std::string::npos))
    {
        this->_buffer.erase(position, this->_s1.length());
        this->_buffer.insert(position, this->_s2);
    }
    this->_ofs << this->_buffer;
    this->_ifs.close();
    this->_ofs.close();
}