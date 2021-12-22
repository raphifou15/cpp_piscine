/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 06:18:38 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/22 06:18:40 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data
{
    int i;
};

uintptr_t serialize(Data* ptr)
{
    uintptr_t a = reinterpret_cast<uintptr_t>(ptr);
    return (a);
}

Data* deserialize(uintptr_t raw)
{
    Data *ptr = reinterpret_cast<Data *>(raw);
    return (ptr);
}

int main(void)
{
    Data    *lala = new Data;

    lala->i = 90;
    std::cout << lala << " address " << lala->i << std::endl;
    uintptr_t raw = serialize(lala);
    std::cout << raw << std::endl;
    lala = deserialize(raw);
    std::cout << lala << " address " << lala->i << std::endl;
    return (0);    
}
