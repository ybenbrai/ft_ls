/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:46:14 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/20 17:47:24 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fraiche;

	fraiche = NULL;
	if (s1 && s2)
	{
		fraiche = (char *)malloc(sizeof(char)
				*(ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!fraiche)
			return (NULL);
		ft_strcpy(fraiche, s1);
		ft_strcat(fraiche, s2);
	}
	return (fraiche);