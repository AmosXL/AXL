/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiliang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:01:04 by xiliang           #+#    #+#             */
/*   Updated: 2023/02/16 14:01:40 by xiliang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	i = 1;
	factorial = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		factorial = factorial * i;
		i++;
	}
	return (factorial);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	if (ft_iterative_factorial(atoi(argv[1])) == 0)
		printf("\nCannot calculate the factorial of a negative number.\n\n");
	else
		printf("\n'%d!' is %d\n\n", atoi(argv[1])
			, ft_iterative_factorial(atoi(argv[1])));
	return (0);
}*/
