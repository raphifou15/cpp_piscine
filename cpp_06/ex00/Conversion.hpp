/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:07:33 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/22 17:07:38 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <cmath>
# include <cstring>

class Conversion
{
private:
    std::string _argv;
    double      _value;
public:
    Conversion(std::string argv);
    ~Conversion(void);
    std::string getArgv(void);
    double      getValue(void);
    void    change_to_char(double value, std::string argv);
    void    change_to_int(double value, std::string argv);
    void    change_to_float(double value, std::string argv);
    void    change_to_double(double value, std::string argv);
    bool    is_not_a_number(std::string argv);
    bool    is_it(std::string s);
    int     precision(std::string argv);
};


#endif
