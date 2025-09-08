/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:24:41 by ctete             #+#    #+#             */
/*   Updated: 2025/06/13 15:20:10 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{

    private: 
       Contact contact[8];
       
    public:
        PhoneBook();
        ~PhoneBook();
        void add();
        void SEARCH();
        
};

#endif
