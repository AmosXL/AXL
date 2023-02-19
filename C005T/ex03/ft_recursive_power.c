/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiliang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:05:39 by xiliang           #+#    #+#             */
/*   Updated: 2023/02/16 14:06:38 by xiliang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	printf("\n");
	printf("7^5 is %d\n\n", ft_recursive_power(7, 5));
	printf("42^0 is %d\n\n", ft_recursive_power(42, 0));
	printf("0^42 is %d\n\n", ft_recursive_power(0, 42));
	printf("0^0 is %d\n\n", ft_recursive_power(0, 0));
	printf("7^-7 is %d\n\n", ft_recursive_power(7, -7));
	return (0);
}*/
