/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:06:02 by ctete             #+#    #+#             */
/*   Updated: 2025/06/13 15:50:21 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook ::PhoneBook() {

};

PhoneBook ::~PhoneBook() {

};

static int c = 0;

std::string truncateWithDot(const std::string& str) {
     size_t width = 10;
    if (str.length() > width) {
        return str.substr(0, width - 1) + ".";
    }
    return str;
}

void PhoneBook ::add()
{

    static int index = 0;

    std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

    while (1)
    {
        std::cout << "FistName : ";
        if (!(std::getline(std::cin, firstName)))
        {
            std::cout << "Digite novamente\n";
            return;
        }
        if ((firstName.length() == 0) || (firstName[0] == '\t') || (firstName[0] == ' '))
        {
            std::cout << "Digite novamente\n";

            continue;
        }
        break;
    }
    while (1)
    {
        std::cout << "NickName: ";
        if (!(std::getline(std::cin, nickName)))
        {
            std::cout << "\n";
            return;
        }
        if (nickName.length() == 0 || (nickName[0] == '\t') || (nickName[0] == ' '))
        {
            std::cout << "Digite novamente\n";
            continue;
        }
        break;
    }
    while (1)
    {
        std::cout << "LastName: ";
        if (!(std::getline(std::cin, lastName)))
        {
            std::cout << "\n";
            return;
        }
        if (lastName.length() == 0 || (lastName[0] == '\t') || (lastName[0] == ' '))
        {
            std::cout << "Digite novamente\n";
            continue;
        }
        break;
    }
    while (1)
    {
        std::cout << "PhoneNumber: ";
        if (!(std::getline(std::cin, phoneNumber)))
        {
            std::cout << "\n";
            return;
        }
        if (phoneNumber.length() == 0 || (phoneNumber[0] == '\t') || (phoneNumber[0] == ' '))
        {
            std::cout << "Digite novamente\n";
            continue;
        }
        break;
    }
    while (1)
    {
        std::cout << "DarkestSecret: ";
        if (!(std::getline(std::cin, darkestSecret)))
        {
            std::cout << "\n";
            return;
        }
        if (darkestSecret.length() == 0 || (darkestSecret[0] == '\t') || (darkestSecret[0] == ' '))
        {
            std::cout << "Digite novamente\n";
            continue;
        }
        break;
    }
    this->contact[index].setFirstName(firstName);
    this->contact[index].setNickName(nickName);
    this->contact[index].setLastName(lastName);
    this->contact[index].setPhoneNumber(phoneNumber);
    this->contact[index].setDarkestSecret(darkestSecret);
    index++;

    if (c < 8)
        c++;
    if (index == 8)
        index = 0;
}
void PhoneBook::SEARCH()
{
    std::string index;
    std::cout << "---------------------------------------------\n";
    std::cout << "|     index|first name|  nickname|  lastname|\n";
    std::cout << "---------------------------------------------\n";

    if (c > 0)
    {
        int r = 0;
        while (r < c)
        {
            std::cout << "|" << std::setw(10) << r ;
            std::cout << "|"<< std::setw(10) << truncateWithDot(this->contact[r].getFirstName());
            std::cout << "|" << std::setw(10) << truncateWithDot( this->contact[r].getNickName());
            std::cout << "|" << std::setw(10) << truncateWithDot(this->contact[r].getLastName()) << "|" << "\n";
            std::cout << "---------------------------------------------\n";
            r++;
        }

        std::cout << "\n";
        std::cout << "search index: ";
        std::getline(std::cin, index);
        std::cout << "\n\n";
                r = atoi(index.c_str()); 
                if ((r == 0 && index[0] == '0') || (r > 0 && r <= c))
                {
                    std::cout << "FirstName: " << this->contact[r].getFirstName() << "\n";
                    std::cout << "NickName: " << this->contact[r].getNickName() << "\n";
                    std::cout << "LastName: " << this->contact[r].getLastName() << "\n";
                    std::cout << "PhoneNumber: " << this->contact[r].getDarkestSecret() << "\n";
                    std::cout << "DarkestSecret: " << this->contact[r].getPhoneNumber() << "\n\n";
                }                
                else
                    std::cout << "INDEX NAO ENCONTRADO!\n";
    }

      std::cout << "Pressione Enter para continuar...\n";
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
    
