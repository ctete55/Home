/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctete <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:40:21 by ctete             #+#    #+#             */
/*   Updated: 2025/09/09 12:05:19 by ctete            ###   ########.fr       */
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
	   Bureaucrat();
	   Bureaucrat(std::string name, int cout);
	  ~Bureaucrat();
	  
	  class GradeTooHighException : public std:: exception{ virtual const char *what()const throw(); };
	  class GradeTooLowException  : public std:: exception{ virtual const char *what()const throw(); };
	  class is_good  : public std:: exception{ virtual const char *what()const throw(); };

	  std::string getName()const;
	  int getCout()const;

	  void incrementCout();
	  void decrementCout();

};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &Bureaucrat);
#endif