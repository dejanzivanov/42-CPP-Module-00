/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:00:27 by dzivanov          #+#    #+#             */
/*   Updated: 2022/03/10 16:22:48 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	int i;
	int j;
	int argc2;

	i = 1;
	j = 0;
	argc2 = argc - 1;
	if (argc2 == 0)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	while (i <= argc2)
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout << "\n";
	return (0);
}

