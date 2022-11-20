/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:48:24 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/20 19:07:57 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_len(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		i++;
	}
	if (n >= 10)
	{
		i += ft_putnbr_len(n / 10);
		i += ft_putnbr_len(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
		i++;
	}
	return (i);
}
