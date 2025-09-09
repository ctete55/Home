/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:40:21 by ctete             #+#    #+#             */
/*   Updated: 2025/09/09 11:30:43 by ctete            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include<iostream>
#include<string.h>
#include<exception>


class Bureaucrat{
	
	private:
	  const std::string name;
	  int cout;


	
	public:
	  
	  class is_higth : public std:: exception{ virtual const char *what()const throw() };
	  class is_low: public std exception{ virtual const char *what()const throw() };

	  Bureaucrat(std::string &name, int cout);
	  ~Bureaucrat();

	  std::string getName()const;
	  int getCout();

	  void incrementCout();
	  void decrementCout();

};
