/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiliang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:02:10 by xiliang           #+#    #+#             */
/*   Updated: 2023/02/16 14:02:52 by xiliang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	if (ft_recursive_factorial(atoi(argv[1])) == 0)
		printf("\nCannot calculate the factorial of a negative number.\n\n");
	else
		printf("\n'%d!' is %d\n\n", atoi(argv[1])
			, ft_recursive_factorial(atoi(argv[1])));
	return (0);
}*/
