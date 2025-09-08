/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:37:04 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:37:06 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: Zombie()
{

}

Zombie:: Zombie(std:: string nome)
{
    name = nome;
}
Zombie:: ~Zombie(){

    std::cout<<name<< " successfully destroyed"<<std::endl;
}

void Zombie::annouce(){
    std::cout<<name<<" BRAIIIIIIIINNNZZZ..."<<std::endl;
}
