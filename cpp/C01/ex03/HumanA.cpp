/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:40:49 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:40:52 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &typeArm): 
name(name),typeArm(typeArm){};

HumanA::~HumanA(){}

void HumanA::attack()const{
    std::cout<<name<< "attacks with his "<<typeArm.getType()<<std::endl;
}
