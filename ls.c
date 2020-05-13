/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khimya <khimya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 23:34:04 by khimya            #+#    #+#             */
/*   Updated: 2020/05/13 00:36:59 by khimya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/includes/ls.h"

int					main(int c, char **v)
{
	DIR				*dirp;
	struct	dirent	*dirr;
	(void)c;

	if(!(dirp = opendir(v[1])))
		ft_putstr("erreur");
	while((dirr = readdir(dirp))!= NULL)
	{
		ft_putstr(dirr->d_name);
		ft_putstr("\n");
	}
	return(0);
}