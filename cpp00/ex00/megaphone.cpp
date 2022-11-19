/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:01:17 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/17 10:17:42 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);	
}

char	to_upper(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main(int argc, char *argv[])
{
	int len;
	int	i = 1;

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			len = ft_strlen(argv[i]);
			for (int x = 0; x < len; x++)
				std::cout << to_upper(argv[i][x]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
