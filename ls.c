/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:34:29 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/25 00:13:53 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_ls	*_ls(const char *dir, t_ls *ls)
{
	struct dirent *d;
	DIR *dh;
	t_ls *head;
	
	head = ls;
	dh = opendir(dir);
	if (dh == NULL)
	{
		printf("Error: %s\n", strerror(errno));
		return (NULL);
	}
	while ((d = readdir(dh)) != NULL)
	{
		if(d->d_name[0] != '.')
		{
			ls->name = ft_strdup(d->d_name);
			ls->next = (t_ls *)malloc(sizeof(t_ls));
			ls = ls->next;		
		}
	}
	ls = head;
	closedir(dh);
	return (ls);
}