/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:44:14 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:44:16 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type):type(type){}

Weapon:: ~Weapon(){}

const std::string &Weapon::getType()const{

        return this->type;
}

void Weapon::setType(std::string newType)
{
    type = newType;
}
