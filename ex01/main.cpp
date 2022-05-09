/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:08:53 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/04 12:34:47 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

int main(void)
{

	std::string cmd;
	int first_print;

	first_print = 0;
	PhoneBook phonebook;

	if(!first_print)
	{
		std::cout << "Please Input one of the three commands: ADD, SEARCH or EXIT" << std::endl;
		first_print = 1;
	}

	while (getline(std::cin, cmd))
	{
		if(first_print == 2)
			std::cout << "Please Input one of the three commands: ADD, SEARCH or EXIT" << std::endl;
		// std::cin >> cmd;
		if (cmd.empty() || cmd.size() == 0)
		{
			exit(1);
		}
		else if(cmd == "ADD")
			phonebook.add_contact();
		else if(cmd == "SEARCH")
		{
			if (phonebook.number_of_contacts != -1)
			{
				phonebook.display_phonebook();
				phonebook.search_contact();
			}
			else
			{
				std::cout << "No Contacts Found" << std::endl;
				std::cout << "Please Input one of the three commands: ADD, SEARCH or EXIT" << std::endl;
			}

		}

		else if(cmd == "EXIT")
			exit(1);
		else
		{
			std::cout << "Please Input one of the three commands: ADD, SEARCH or EXIT" << std::endl;
			std::cin.clear();
			cmd.clear();
			continue;
		}

		// std::cout << cmd;
	}


	//std::cout << "Please Input one of the three commands: ADD, SEARCH or EXIT" << std::endl;
	//std::cin >> cmd;

	return 0;
}