/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:36:04 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:36:13 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie{

        private:
                std::string name;

        public:
                Zombie(std::string nome);
                ~Zombie();
                void announce();
                
                
};

Zombie* newZombie( std::string name );
 void randomChump( std::string name ); 

#endif
