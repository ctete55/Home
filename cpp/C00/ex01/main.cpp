/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:05:44 by ctete             #+#    #+#             */
/*   Updated: 2025/06/13 15:25:36 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    bool good = true;
    PhoneBook obj;
    std::string input;
    while (good)
    {
         system("clear");
        std::cout << "digite uma das opcoes:  ADD | SEARCH  | EXIT!\n";
        if (!std::getline(std::cin, input))
        {
            std::cout << "\nSaindo...\n";
            return 0;
        }
        else if (input == "ADD")
            obj.add();
         else if (input == "SEARCH")
            obj.SEARCH(); 
        else if(input == "EXIT")
            good = false;
    }
    return (0);
}
