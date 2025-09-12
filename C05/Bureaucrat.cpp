/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:40:32 by ctete             #+#    #+#             */
/*   Updated: 2025/09/09 09:40:34 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

const char *Bureaucrat::is_higth::what() const throw(){
    return "numero muito grande o minimo e 1";
}

const char *Bureaucrat::is_low::what()const throw(){
    return "numero muito baixo o minimo is 150";
}

const char *Bureaucrat::is_good::what() const throw(){
    return "voce sera o proximo presidente";
}



Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(const std::string name, int cout) : name(name){
        if(cout < 1)
            throw is_higth();
        else if(cout > 150)
            throw is_low();
        else if(cout > 1 && cout < 150)
            throw is_good();
        cout = cout;
}


Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName()const{ return name;}
int Bureaucrat::getCout()const{ return cout;}


void Bureaucrat::incrementCout(){
    if(cout + 1 > 150)
        throw is_low();
    cout++;
}

void Bureaucrat::decrementCout(){
    if(cout - 1 < 1)
        throw is_higth();
    cout--;
}

