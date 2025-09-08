/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:41:11 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:42:06 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
#define HumanA_HPP

#include "Weapon.hpp"

class HumanA{

        private:
            std::string name;
            Weapon &typeArm; 

        public:
            HumanA(std::string name, Weapon &typeArm);
            ~HumanA();
            void attack() const;

};
#endif

