/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 03:34:03 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/24 03:34:06 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array <int>l(2);
    Array <int>l2(l);
    Array <int>l4(4);

    for(int i = 0; i < 4; i++)
    if (i >= 4)
    {
        try
        {
            l4[i] = i;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
    {
        l4[i] = i;
    }

    l2 = l4;
    for (int i = 0; i < 4; i++)
    {
        std::cout << l2[i] << std::endl;
    }

    std::cout << "//////////////////////////////////////////////////////" << std::endl;
	{
		Array <std::string> str1(10);
		Array <std::string> str2(20);

		for (int i = 0; i < 10; i++) {
			std::string s = "0 hey";
			s[0] += i;
			str1[i] = s;
		}
		str2 = str1;
		std::cout << str1[8] << std::endl;
		std::cout << str2[8] << std::endl;
		std::cout << str1[9] << std::endl;
		std::cout << str2[9] << std::endl;
		try
        {
			std::cout << str2[10] << std::endl;
		}
		catch (std::exception & e)
        {
			std::cout << e.what() << std::endl;
		}
	}
    return (0);
}