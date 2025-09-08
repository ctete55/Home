/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:37:15 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:37:17 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
private:
            std::string name;
public:
     Zombie();
    Zombie(std::string nome);
    ~Zombie();
    void annouce();   
};
Zombie* zombieHorde( int N, std::string name);
#endif
