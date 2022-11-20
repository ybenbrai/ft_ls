/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:47:58 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/20 18:48:02 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(unsigned int n)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthex(n / 16);
		ft_puthex(n % 16);
	}
	else
		ft_putchar(hexa[n]);
	return (1);
}
