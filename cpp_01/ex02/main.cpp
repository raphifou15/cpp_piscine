/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 23:22:22 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/27 23:22:25 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return (0);
}
