/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:38:19 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:38:21 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string nome){

    if(N <= 0)
        return (NULL);      
 
Zombie *horde = new Zombie[N];
for(int i = 0; i < N; i++)
{
    horde = new Zombie(nome);
    horde++;
}
    return horde;

}
