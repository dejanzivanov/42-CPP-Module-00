/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:56:36 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/04 13:41:05 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>

PhoneBook::PhoneBook(void)
{
	//std::cout << "Constructor called" << std::endl;
	this->number_of_contacts = -1;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void PhoneBook::add_contact(void)
{
	std::string 	first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone_number;
	std::string		darkest_secret;

	std::cout << "Adding contact" << std::endl;

	if (this->number_of_contacts == 7)
	{
		this->number_of_contacts = 0;
	}
	else
		this->number_of_contacts++;

	contact[this->number_of_contacts].set_index(this->number_of_contacts);

	std::cout << "Please Input First Name" << std::endl;

	first_name = this->PhoneBook::input_check();
	if(first_name.empty())
	{
		std::cout << "EOF DETECTED\n";
		return ;
	}
	this->contact[number_of_contacts].set_first_name(first_name);

	std::cout << "Please Input Last Name" << std::endl;
	last_name =  this->PhoneBook::input_check();
	if(last_name.empty())
	{
		std::cout << "EOF DETECTED\n";
		return ;
	}
	this->contact[number_of_contacts].set_last_name(last_name);

	std::cout << "Please Input Nickname" << std::endl;
	nickname =  this->PhoneBook::input_check();
	if(nickname.empty())
	{
		std::cout << "EOF DETECTED\n";
		return ;
	}
	this->contact[number_of_contacts].set_nickname(nickname);

	std::cout << "Please Input Phone Number" << std::endl;
	phone_number =  this->PhoneBook::input_check();
	if(phone_number.empty())
	{
		std::cout << "EOF DETECTED\n";
		return ;
	}
	this->contact[number_of_contacts].set_phone_number(phone_number);

	std::cout << "Please Input Darkest Secret" << std::endl;
	darkest_secret =  this->PhoneBook::input_check();
	
	if(darkest_secret.empty())
	{
		std::cout << "EOF DETECTED\n";
		return ;
	}
	this->contact[number_of_contacts].set_darkest_secret(darkest_secret);

	std::cout << "Please Input one of the three commands: ADD, SEARCH or EXIT" << std::endl;

}
void PhoneBook::search_contact()
{

	int index;
	std::string input;
	int counter;

	counter = 0;
	while(counter <= 7 && get_contact(counter).get_first_name().size() != 0)
        counter++;

	std::cout << "Please insert the index of the contact that you want to search";
	std::cout << std::endl;

	while (getline(std::cin, input) && !std::cin.eof())
	{
		if(!input.empty())
		{
			index = input.compare("0");
			std::cout << input;
			std::cout << counter;
			if(index == counter)
				break;
			if(number_of_contacts == -1)
			{
				std::cout << "Please Add Contacts\n";
				std::cout << "Please Input one of the three commands: ADD, SEARCH or EXIT" << std::endl;
				return ;
			}
			if (index == 1 && counter > 0 && counter < 8)
			{
				index = input.compare("0");
				break;
			}

			if(index > 0 && index  < counter)
			{
				break;
			}
			if(index < 1 || index  > counter)
			{
				input.clear();
				std::cin.clear();
				std::cout << "Invalid Range\n";
				std::cout << "Please input valid index: ";
				continue;
			}
			else
			{	input.clear();
				std::cin.clear();
				std::cout << "There has been an error\n";
				break;
			}
		}

	}

	if(input.empty())
	{
		std::cout << "EOF DETECTED\n";
		return ;
	}
	input.clear();

	std::cout << "Search contact" << std::endl;

	std::cout << " __________ __________ __________ _________________________________" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname| Phone No |DarkSecret|" << std::endl;
	std::cout << "|";


	std::cout << std::setw(10);
	std::cout << index;
	std::cout << "|";

	std::cout << std::setw(10);
	std::cout	<< truncate(this->contact[index - 1].get_first_name(), true);
	std::cout << "|";

	std::cout << std::setw(10);
	std::cout << truncate(this->contact[index - 1].get_last_name(), true);
	std::cout << "|";

	std::cout << std::setw(10);
	std::cout<< truncate(this->contact[index - 1].get_nickname(), true);
	std::cout << "|";

	std::cout << std::setw(10);
	std::cout<< truncate(this->contact[index - 1].get_phone_number(), true);
	std::cout << "|";

	std::cout << std::setw(10);
	std::cout<< truncate(this->contact[index - 1].get_darkest_secret(), true);
	std::cout << "|";

	std::cout << std::endl;
	std::cout << " ‾‾‾‾‾‾‾‾‾‾ ‾‾‾‾‾‾‾‾‾‾ ‾‾‾‾‾‾‾‾‾‾ ‾‾‾‾‾‾‾‾‾‾ ‾‾‾‾‾‾‾‾‾‾ ‾‾‾‾‾‾‾‾‾‾ " << std::endl;

	std::cout << "Please Input one of the three commands: ADD, SEARCH or EXIT" << std::endl;

}

void PhoneBook::display_phonebook(void)
{
	int	i;
	int counter;

	counter = 0;
	i = 1;
	while(counter <= 7 && get_contact(counter).get_first_name().size() != 0)
        counter++;


	std::cout << "___________________________________________" << std::endl;
	std::cout << "|First Name|Last Name | Nickname |  Index |" << std::endl;
	std::cout << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;

	while (i <= counter)
	{
		std::cout << "______________________________________________" << std::endl;
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << truncate(contact[i-1].get_first_name(), true);
		std::cout << "|";

		std::cout << std::setw(10);
		std::cout << truncate(contact[i-1].get_last_name(), true);
		std::cout << "|";

		std::cout << std::setw(10);
		std::cout << truncate(contact[i-1].get_nickname(), true);
		std::cout << "|";

		std::cout << std::setw(10);
		std::cout << i;
		std::cout << "|";

		std::cout << std::endl;
		i++;
	}
	std::cout << std::endl;
}

std::string PhoneBook::truncate(std::string str, bool show_ellipsis=true)
{
	if (str.length() > 10)
	{
		if (show_ellipsis)
		{
			return str.substr(0, 9) + ".";
		}
		else
		{
			return str.substr(0, 10);
		}
	}
	return str;
}

Contact PhoneBook::get_contact(int index)
{
	return contact[index];
}

std::string PhoneBook::input_check()
{
    std::string string;

	while (getline(std::cin, string))
    {
		if((!string.empty()) && string.length() > 0)
	  		break;
    }
	return string;

}
