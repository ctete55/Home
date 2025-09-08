/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:38:52 by ctete             #+#    #+#             */
/*   Updated: 2025/07/01 11:39:03 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{
    std::string str = "HI THIS IS BRAIN";
    std:: string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout<<"------------------------------------------------------------"<<"\n";
    std::cout<<"| referencia principal da string"     "             \033[32m"<< &str <<"\033[0m" "|\n";
    std::cout<<"------------------------------------------------------------"<< std::endl;
    std::cout<<"| endereco que o ponteiro recebeu   " "         \033[32m"<< stringPTR <<"\033[0m" "|\n";
    std::cout<<"------------------------------------------------------------"<<std::endl;
    std::cout<<"| referencia que a referencia recebeu    " "    \033[32m"<< &stringREF<< "\033[0m" "|\n";
    std::cout<<"------------------------------------------------------------"<<"\n\n";
   
    std::cout<<"------------------------------------------------------------"<<std::endl;

    std::cout<<"| valor da string                        "<<str<<"  |\n";
    std::cout<<"------------------------------------------------------------"<<"\n";
    std::cout<<"| valor que ponteiro guarda              "<<*stringPTR<<"  |\n";
    std::cout<<"------------------------------------------------------------"<<"\n";
    std::cout<<"| valor que a referencia guearda         "<<stringREF<<"  |\n";   
    std::cout<<"------------------------------------------------------------"<<"\n"; 
    return (0);

}
