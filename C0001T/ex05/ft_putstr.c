/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiliang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:34:59 by xiliang           #+#    #+#             */
/*   Updated: 2023/02/06 15:38:16 by xiliang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int	len;

	len == 0;
	while (str[len])
		len++;
	write(1, str, len);
}
/*
int main(void)
{
	ft_putstr("Hey");
}
*/
