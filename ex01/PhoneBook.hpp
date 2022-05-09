/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:56:33 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/04 13:26:54 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>

class PhoneBook {

	private:

		Contact contact[8];
		// std::string	input_check(std::string p_param);
		std::string	input_check();



	public:
		int		number_of_contacts;
		PhoneBook(void);
		~PhoneBook(void);
		void	add_contact();
		void	search_contact();
		void	display_phonebook();
		Contact	get_contact(int index);
		std::string truncate(std::string str, bool show_ellipsis);



};

#endif