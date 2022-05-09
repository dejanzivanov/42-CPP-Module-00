/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:56:33 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/03 11:42:28 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {

	private:
		int				index;
		std::string 	first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		darkest_secret;

public:
	Contact(void);
	~Contact(void);
	int			get_index(void);
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_phone_number(void);
	std::string	get_darkest_secret(void);

	void 		set_index(int p_index);
	void 		set_first_name(std::string p_first_name);
	void 		set_last_name(std::string p_last_name);
	void 		set_nickname(std::string p_nickname);
	void 		set_phone_number(std::string p_phone_number);
	void 		set_darkest_secret(std::string p_phone_number);


};

#endif