/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:39:46 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/20 19:05:11 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(unsigned long long int n, char *base)
{
	unsigned long long	len;
	int					i;
	int					count;

	i = 0;
	count = 0;
	len = ft_strlen(base);
	if (n >= len)
	{
		count += ft_putnbr_base(n / len, base);
		count += ft_putnbr_base(n % len, base);
	}
	else
	{
		write(1, &base[n], 1);
		count++;
	}
	return (count);
}
