/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:55:21 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/20 18:55:35 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexlow(unsigned int n)
{
	char		*hexa;
	int			i;

	hexa = "0123456789abcdef";
	i = 0;
	if (n >= 16)
	{
		i += ft_puthexlow(n / 16);
		i += ft_puthexlow(n % 16);
	}
	else
	{
		ft_putchar(hexa[n]);
		i++;
	}
	return (i);
}
