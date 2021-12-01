/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:57:45 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/01 14:57:51 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen   k;

    switch (argc)
    {
        case 2:
            k.complain(argv[1]);
            break;
        default:
            std::cout << "D'ont have the good numbers of arguments" << std::endl;
            break;
    }
    return (0);
}