/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:21:19 by ybenbrai          #+#    #+#             */
/*   Updated: 2021/04/04 17:53:41 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	ft_error(char *str)
{
	ft_putstr_fd(str, 2);
	exit(1);
}

int main(int c, char **v)
{
	
	t_ls *ls;

	ls = (t_ls *)malloc(sizeof(t_ls));
	if(!ls)
		ft_error("Error: malloc failed");
	if(c == 1)
	{
		ls = _ls(".", ls);
		ls = ft_sort(ls);
		ls_printer(ls);
	}
	else if(c == 2)
	{
		ls = _ls(v[1], ls);
		ls = ft_sort(ls);
		// ls_printer(ls);
	}
	else
		ft_error("Error: too many arguments");
	return (0);
}
