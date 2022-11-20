/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:40:39 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/20 18:40:56 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base_p(unsigned long long int n, char *base)
{
	unsigned long long	len;
	int					count;
	int					i;

	i = 0;
	count = 0;
	len = ft_strlen(base);
	if (n >= len)
	{
		count += ft_putnbr_base_p(n / len, base);
		count += ft_putnbr_base_p(n % len, base);
	}
	else
	{
		write(1, &base[n], 1);
		count++;
	}
	return (count);
}
