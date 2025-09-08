/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:44:23 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:44:25 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include<iostream>



class Weapon{

        private:
            std::string type;
        public:
                Weapon(std::string type);
                ~Weapon();
                const std:: string &getType()const;
                void setType(std::string newType);
};

#endif
