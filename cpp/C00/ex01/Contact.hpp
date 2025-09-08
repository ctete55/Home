/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:24:09 by ctete             #+#    #+#             */
/*   Updated: 2025/06/13 16:06:22 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string.h>
#include <iomanip>
#include <limits>
#include <cstdlib>

class Contact{

private:  
  std::string firstName , lastName, nickName, phoneNumber, darkestSecret ;
  
public:
     Contact();
    ~Contact();
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
    
 
    void setFirstName(std::string firstName);
    void setLastName(std::string lastname);
    void setNickName(std::string nickname);
    void setPhoneNumber(std::string phone);
    void setDarkestSecret(std::string secret);
    
};
#endif
