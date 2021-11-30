/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:52:05 by rkhelif           #+#    #+#             */
/*   Updated: 2021/11/29 13:52:08 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
# define SED_H

# include <iostream>
# include <fstream>
# include <cstdlib>

class   Sed
{
    private:
        Sed(void);
        std::string _path_file;
        std::string _s1;
        std::string _s2;
    public:
        Sed(std::string path_file, std::string s1, std::string s2);
        ~Sed(void);
        void    read_and_replace(void);
};

#endif