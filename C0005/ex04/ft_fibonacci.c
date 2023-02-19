/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiliang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:07:25 by xiliang           #+#    #+#             */
/*   Updated: 2023/02/16 14:08:02 by xiliang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("\nThe fibonnaci number at index '%s' is '%d'.\n\n"
			, argv[1], ft_fibonacci(atoi(argv[1])));
	return (0);
}*/
