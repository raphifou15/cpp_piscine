/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 04:10:41 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/18 04:10:46 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
    if (argc <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }

    for (int i = 1 ;i < argc; i++)
    {
        for (int j = 0 ; argv[i][j] != '\0'; j++)
            std::cout << static_cast<char>(toupper(argv[i][j]));
        if (i + 1 != argc)
            std::cout << " ";
    }
    std::cout << std::endl;   
    return (0);
}
