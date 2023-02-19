/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiliang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:03:26 by xiliang           #+#    #+#             */
/*   Updated: 2023/02/16 14:05:04 by xiliang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	result;

	count = 1;
	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (count < power)
	{
		result = result * nb;
		count++;
	}
	return (result);
}

/*int	main(void)
{
	printf("\n");
	printf("7^5 is %d\n\n", ft_iterative_power(7, 5));
	printf("42^0 is %d\n\n", ft_iterative_power(42, 0));
	printf("0^42 is %d\n\n", ft_iterative_power(0, 42));
	printf("0^0 is %d\n\n", ft_iterative_power(0, 0));
	printf("7^-7 is %d\n\n", ft_iterative_power(7, -7));
	return (0);
}*/
