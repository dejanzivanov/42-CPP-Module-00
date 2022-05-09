/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:56:36 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/04 12:31:30 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
	// std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact(void)
{
	//std::cout << "Destructor called" << std::endl;
	return;
}

int	Contact::get_index(void)
{
	return this->index;
}

std::string	Contact::get_first_name(void)
{
	return this->first_name;
}

std::string	Contact::get_last_name(void)
{
	return this->last_name;
}

std::string	Contact::get_nickname(void)
{
	return this->nickname;
}

std::string	Contact::get_phone_number(void)
{
	return this->phone_number;
}

std::string	Contact::get_darkest_secret(void)
{
	return this->darkest_secret;
}

void Contact::set_index(int p_index)
{
	this->index = p_index;
}

void  Contact::set_first_name(std::string p_first_name)
{
	this->first_name = p_first_name;
}

void  Contact::set_last_name(std::string p_last_name)
{
	this->last_name = p_last_name;
}

void  Contact::set_nickname(std::string p_nickname)
{
	this->nickname = p_nickname;
}

void  Contact::set_phone_number(std::string p_phone_number)
{
	this->phone_number = p_phone_number;
}

void  Contact::set_darkest_secret(std::string p_darkest_secret)
{
	this->darkest_secret = p_darkest_secret;
}


