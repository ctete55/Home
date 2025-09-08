/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:04:37 by ctete             #+#    #+#             */
/*   Updated: 2025/06/13 11:32:49 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact:: Contact(){
}
Contact:: ~Contact(){
}


std::string Contact :: getFirstName(){ return(firstName); }
std::string Contact :: getLastName(){ return(lastName); }
std::string Contact :: getNickName(){ return(nickName); }
std::string Contact :: getPhoneNumber(){ return(phoneNumber); }
std::string Contact :: getDarkestSecret(){ return(darkestSecret); }

void Contact :: setFirstName(std:: string firstName){ this->firstName = firstName; }
void Contact :: setLastName(std:: string firstName){ this->lastName = firstName; }
void Contact :: setNickName(std:: string nickName){ this->nickName = nickName; }
void Contact :: setPhoneNumber(std:: string nickName){ this->phoneNumber = nickName; }
void Contact :: setDarkestSecret(std:: string nickName){ this->darkestSecret = nickName; }
