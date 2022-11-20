/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:54:43 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/20 18:54:57 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexup(unsigned int n)
{
	char	*hexa;
	int		i;

	hexa = "0123456789ABCDEF";
	i = 0;
	if (n >= 16)
	{
		i += ft_puthexup(n / 16);
		i += ft_puthexup(n % 16);
	}
	else
	{
		ft_putchar(hexa[n]);
		i++;
	}
	return (i);
}
