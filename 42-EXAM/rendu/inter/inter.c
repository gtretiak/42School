/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtretiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:43:36 by gtretiak          #+#    #+#             */
/*   Updated: 2024/08/22 18:33:22 by gtretiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	while (argv[1][i])
		i++;
	s = i;
	i = 0;
	if (argc == 3)
	{
		while (s)
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[2][j] == argv[1][i])
				{
					ft_write(argv[1][i]);
					i++;
					s--;
				}
				j++;
			}
			i++;
			s--;
		}
	}
	ft_write('\n');
	return (0);
}
