/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmykkane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:51:27 by jmykkane          #+#    #+#             */
/*   Updated: 2022/10/24 16:51:30 by jmykkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex_fd(unsigned long long num, int fd)
{
	int		i;
	char	c;
	int		temp;
	char	buf[17];

	i = 0;
	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
		{
			c = temp + 48;
			buf[i] = c;
		}
		else
		{
			c = temp + 87;
			buf[i] = c;
		}
		num = num / 16;
		i++;
	}
	while (--i >= 0)
		ft_putchar_fd(buf[i], fd);
}
