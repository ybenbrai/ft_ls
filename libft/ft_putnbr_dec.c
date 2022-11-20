/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:41:33 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/20 18:41:51 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbrdec(unsigned int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		i++;
	}
	if (n >= 10)
	{
		i += ft_putnbrdec(n / 10);
		i += ft_putnbrdec(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
		i++;
	}
	return (i);
}
