/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:45:22 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:45:25 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include"Weapon.hpp"

class HumanB{

    private:
        std::string name;
        Weapon *yesNot; 

    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon typeARm);
        void attack() const;
};

#endif

