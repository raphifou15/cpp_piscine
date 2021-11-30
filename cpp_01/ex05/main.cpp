/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:21:57 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/30 15:22:17 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
    Karen k;

    k.complain("DEBUG");
    std::cout << std::endl;
    k.complain("INFO");
    std::cout << std::endl;
    k.complain("WARNING");
    std::cout << std::endl;
    k.complain("ERROR");
    return (0);
}