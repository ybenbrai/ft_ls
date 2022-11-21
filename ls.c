/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:34:29 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/21 22:42:34 by ybenbrai         ###   ########.fr       */
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
	if (dh == NULL)
	{
		printf("Error: %s\n", strerror(errno));
		return (NULL);
	}
	while ((d = readdir(dh)) != NULL)
	{
		if(d->d_name[0] == '.')
			continue ;
		else
		{
			tmp->name = ft_strdup(d->d_name);
			tmp->next = (t_ls *)malloc(sizeof(t_ls));
			tmp = tmp->next;		
		}
	}
	tmp->next = NULL;
	closedir(dh);
	return (ls);
}