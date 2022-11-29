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

void	ft_puthex_fd(unsigned long num, int fd)
{
	int 	i;
	int		n;
	int		temp;
	char	*buf[17];

	i = 0;
	while (num != 0)
	{
		temp = num % 16;
		if (temp < 10)
			buf[i] = temp + 48;
		else
			buf[i] = temp + 55;
		num = num / 16;
		i++;
	}
	while (--i >= 0)
		ft_putchar_fd(buf[i], 1);
}
