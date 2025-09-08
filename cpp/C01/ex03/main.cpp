/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:43:56 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:43:58 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include"HumanB.hpp"


int main() {
    Weapon club("bastão grosso");
    
     HumanA bob("Bob ", club);
    bob.attack();
    
    HumanB jim("Jim ");
    jim.attack();
    
    jim.setWeapon(club);
    jim.attack();
    
    club.setType("bastão fino");
    bob.attack();
    jim.attack();
    
    return 0;
}
