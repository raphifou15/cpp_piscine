/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:52:36 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/29 13:52:39 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::~Sed(void){return ;}
Sed::Sed(std::string path_file ,std::string s1, std::string s2): _path_file(path_file), _s1(s1), _s2(s2){return ;}

void    Sed::read_and_replace(void)
{
    std::fstream    file_read(this->_path_file.c_str());
    if (file_read.fail())
    {
        std::cout << "error le fichier n'existe pas" << std::endl;
        exit(1);
    }
    std::string line;
    std::string path_2 = this->_path_file + ".replace";
    std::fstream    file_write(path_2.c_str(), std::ios_base::out);
    if (file_write.fail())
    {
        file_read.close();
        std::cout << "error le fichier n'existe pas" << std::endl;
        exit(1);
    }
    while (std::getline(file_read, line))
    {
        std::size_t found = line.find(this->_s1);
        if (found!=std::string::npos)
        {
            while (found!=std::string::npos)
            {
                file_write.write(line.c_str(), found);
                file_write.write(this->_s2.c_str(), this->_s2.length());
                line = line.substr(found);
                line = line.substr(this->_s1.length());
                found = line.find(this->_s1);
            }
            if (file_read.eof())
                file_write << line << std::ends;
            else
                file_write << line << std::endl;
        }
        else
        {
            if (file_read.eof())
                file_write << line << std::ends;
            else
                file_write << line << std::endl;
        }
    }
    file_read.close();
    file_write.close();
    return ;
}