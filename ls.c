/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:34:29 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/21 14:29:23 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_ls	*_ls(const char *dir, t_ls *ls)
{
	struct dirent *d;
	DIR *dh;
	t_ls *tmp;
	
	dh = opendir(dir);
	tmp = ls;
	while ((d = readdir(dh)) != NULL)
	{
		if(d->d_name[0] != '.')
		{
			ls->name = d->d_name;
			ls->next = (t_ls *)malloc(sizeof(t_ls));
			ls = ls->next;
		}

	}
	ls->next = NULL;
	ls = tmp;
	return (ls);
	// ft_printf("Sorting...\n");
	// ft_printf("Sorted...\n");
}