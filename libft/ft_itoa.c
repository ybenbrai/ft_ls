/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:38:28 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/20 19:07:46 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*str;

	i = 0;
	sign = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	str = (char *)malloc(sizeof(char) * (ft_nbrlen(n) + 1));
	if (str == NULL)
		return (NULL);
	while (n > 0)
	{
		str[i++] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign == -1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev_str(str));
}
