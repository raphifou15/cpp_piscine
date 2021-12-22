/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:57:44 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/21 16:57:47 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <cstring>

bool    is_it(char *s) {

	std::string tab[8] = {"-inff", "+inff", "nanf", "-inf" ,"+inf", "nan", "inf", "inff"};

	for (int i = 0; i < 8; i++)
		if (!strcmp(s, tab[i].c_str()))
			return (1);
	return (0);	
}

bool    is_not_a_number(char *argv)
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

void change_to_char(double value, char *argv)
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

void    change_to_int(double value, char *argv)
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

int     precision(char *argv)
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

void    change_to_float(double value, char *argv)
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

void    change_to_double(double value, char *argv)
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

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "only one parameter is expected" << std::endl;
        return (0);
    }
    double value = std::atof(argv[1]);

    change_to_char(value, argv[1]);
    change_to_int(value, argv[1]);
    change_to_float(value, argv[1]);
    change_to_double(value, argv[1]);
    return (0);
}
