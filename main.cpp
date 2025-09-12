/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:40:42 by ctete             #+#    #+#             */
/*   Updated: 2025/09/09 09:40:43 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"




int main(){
         
            try
            {
                throw std::runtime_error("carapau da loja");
               
            }
            catch(const std::exception &e)
            {
                std::cerr << e.what() << '\n';
                
            }
            
       
                    

    return 0;
}
