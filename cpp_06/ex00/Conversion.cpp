/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:07:52 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/22 17:07:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(std::string argv) : _argv(argv)
{
    this->_value = std::atof(this->_argv.c_str());
}

Conversion::~Conversion(void){}

std::string     Conversion::getArgv(void){ return (this->_argv);}
double          Conversion::getValue(void){ return (this->_value);}


void Conversion::change_to_char(double value, std::string argv)
{
    if (value < 0 || value > 255 || is_not_a_number(argv) || argv[0] == '\0')
    {
        std::cerr << "char: impossible" << std::endl;
        return ;
    }
    char c;
    c = static_cast<char>(value);
    
    if (c == 0 && argv[0] == 'f')
    {
         std::cerr << "int: impossible" << std::endl;
         return ;
    }
    (std::isprint(c)) ? std::cout << "char: " << c << std::endl : std::cerr << "char: Non displayable" << std::endl;
}

void    Conversion::change_to_int(double value, std::string argv)
{
    if (value < -2147483648 || value > 2147483647 || is_not_a_number(argv) || argv[0] == '\0')
    {
        std::cerr << "int: impossible" << std::endl;
        return ;
    }
    int lala = static_cast<int>(value);
    if (lala == 0 && argv[0] == 'f')
    {
         std::cerr << "int: impossible" << std::endl;
         return ;
    }
    std::cout << "int: " << lala << std::endl;
}

void    Conversion::change_to_float(double value, std::string argv)
{
    int num = precision(argv);
    float lala = static_cast<float>(value);
    if (is_it(argv))
    {
        std::cout << "float: " << std::fixed << std::setprecision(num) << lala << "f" << std::endl;
        return ;
    }
    if (is_not_a_number(argv) || argv[0] == 'f' || argv[0] == '\0')
    {
        std::cerr << "int: impossible" << std::endl;
        return ;
    }
    std::cout << "float: " << std::fixed << std::setprecision(num) << lala << "f" << std::endl;
}

void    Conversion::change_to_double(double value, std::string argv)
{
    int num = precision(argv);
    if (is_it(argv))
    {
        std::cout << "double: " << std::fixed << std::setprecision(num) << value << std::endl;
        return ;
    }
    if (is_not_a_number(argv) || argv[0] == 'f' || argv[0] == '\0')
    {
        std::cerr << "double: impossible"<< std::endl;
        return ;
    }
    std::cout << "double: " << std::fixed << std::setprecision(num) << value << std::endl;
}

bool    Conversion::is_not_a_number(std::string argv)
{
        for (int i = 0; argv[i] != '\0'; i++)
    {
        if (i == 0)
        {
            if ((argv[i] < '0' || argv[i] > '9') && argv[i] != '.' && argv[i] != '+' && argv[i] != '-' && argv[i] != 'f')
                return (1);
        }
        if (i != 0)
        {
            if ((argv[i] < '0' || argv[i] > '9') && argv[i] != '.' && argv[i] != 'f')
                return (1);
        } 
    }
    return (0);
}

int Conversion::precision(std::string argv)
{
    int num = 0;
    int active = 0;

    for(int i = 0; argv[i] != '\0'; i++)
    {
        if (active == 1)
            num++;
        if (active == 1 && argv[i] == 'f')
            num--;
        if (argv[i] == '.')
            active = 1;
    }
    if (num == 0)
        return (1);
    return (num);
}

bool    Conversion::is_it(std::string s)
{
    std::string tab[8] = {"-inff", "+inff", "nanf", "-inf" ,"+inf", "nan", "inf", "inff"};
	for (int i = 0; i < 8; i++)
		if (!strcmp(s.c_str(), tab[i].c_str()))
			return (1);
	return (0);	
}