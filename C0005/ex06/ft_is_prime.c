/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiliang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:23:53 by xiliang           #+#    #+#             */
/*   Updated: 2023/02/16 14:24:55 by xiliang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < (nb / 2) + 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	if (ft_is_prime(atoi(argv[1])) == 1)
		printf("\n'%d' is PRIME.\n\n", atoi(argv[1]));
	else
		printf("\n'%d' is NOT PRIME\n\n", atoi(argv[1]));
}*/
