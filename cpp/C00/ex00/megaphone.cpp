/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 08:58:29 by ctete             #+#    #+#             */
/*   Updated: 2025/06/13 15:17:39 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* 
escreva um programa que leia os dados de entrada de uma determinada pessoa pessoa:
idade, sexo, altura. 
*/

#include<iostream> 

int main(int argc, char **argv)
{
        int i = 1;
        int  j;
        std::string str;
        
        if(argc > 1)
        {
                while(argv[i])
                {
                        j = 0;
                        while (argv[i][j])
                        {
                              if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
                                        str += argv[i][j] - 32;
                                else
                                        str += argv[i][j];
                                j++;
                        }
                        std::cout<< str;
                        str = ' ';          
                   i++;          
                }
                std::cout<<'\n';
             
        }
        else
                std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
        return 0;
}
