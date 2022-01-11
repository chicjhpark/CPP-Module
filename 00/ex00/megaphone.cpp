/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehpark <jaehpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:26:03 by jaehpark          #+#    #+#             */
/*   Updated: 2022/01/11 13:34:51 by jaehpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // cout, cin header

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (!argv[1])
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
			std::cout << (char)toupper(argv[i][j]);
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
