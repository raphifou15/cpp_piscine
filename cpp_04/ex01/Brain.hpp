/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:15:30 by rkhelif           #+#    #+#             */
/*   Updated: 2021/12/10 18:15:32 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain(void);
        Brain(const Brain &copie);
        Brain   &operator=(const Brain &a);
        ~Brain(void);
};

#endif