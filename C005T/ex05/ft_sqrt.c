/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiliang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:21:16 by xiliang           #+#    #+#             */
/*   Updated: 2023/02/16 19:30:14 by xiliang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	while (i <= 46340)
	{
		if (nb == (i * i))
			return (i);
		i++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	int	x;
	int	y;

	(void)argc;
	x = atoi(argv[1]);
	y = ft_sqrt(x);
	if (y != 0)
		printf("\nthe sqrt of '%d' is '%d'.\n\n", x, y);
	else
		printf("\n'%d' is not a perfect square.\n\n", x);
	return (0);
}*/
