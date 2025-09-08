/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:35:25 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:35:35 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: Zombie(std::string nome){
    name = nome;
};

Zombie:: ~Zombie(){
        std::cout<<name<< ":was destroyed\n";
}

void Zombie:: announce(){
    std::cout<<name<< "BraiiiiiiinnnzzzZ..."<<std::endl;
}
