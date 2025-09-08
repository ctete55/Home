/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:47:53 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:47:55 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HARL_HPP
#define  HARL_HPP

#include<iostream>
#include<string>

class Harl{

    private:
        void debug();
        void info();
        void warning();
        void error();
    
    public:
        Harl();
        ~Harl();;
        void complain(std::string level);

};

#endif
