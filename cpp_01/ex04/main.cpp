/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:40:48 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/28 22:40:52 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Vous n'avez pas mis le bon nombre d'argument" << std::endl;
        return (0);
    }
    Sed Sed1 = Sed(argv[1], argv[2], argv[3]);
    Sed1.read_and_replace();
    return (0);
}
