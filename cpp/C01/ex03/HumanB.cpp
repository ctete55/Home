/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:42:34 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:42:36 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string name): name(name), yesNot(NULL){}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon yesNot){
    this->yesNot = &yesNot;
}

void HumanB::attack()const{

    if(yesNot)
        std::cout<< name<< "attacks with his"<<yesNot->getType()<<std::endl;
    else
        std::cout <<name<<"tries to attack without a weapon"<<std::endl;
}