/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:36:52 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:36:54 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{

    int hordeSize = 5;
    std::string zombieName = "carapau";

    Zombie *horde = zombieHorde(hordeSize, zombieName);

    if (horde == NULL)
    {
        std::cout << "error a create zombie" << std::endl;
        return 1;
    }

    for (int i = 0; i < hordeSize; i++)
    {
        horde[i].annouce();
    }
    delete[] horde;

    return 0;
}
