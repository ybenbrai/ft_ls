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

int		checkFlags(char *str, t_ls *ls)
{
	int i;

	i = 1;
	if(str[0] != '-')
		return (0);
	while (str[i])
	{
		if (str[i] == 'l' || str[i] == 'R' || str[i] == 'a' || str[i] == 'r' || str[i] == 't')
		{
			ls->flag = str[i];
			i++;
		}
		else
			return (0);
	}
	return (1);
}

void ft_error(char *str)
{
	ft_putstr_fd(str, 2);
	exit(1);
}
t_ls	*checkargs(int argc, char **argv, t_ls *ls)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (checkFlags(argv[i], ls) == 0)
		{
			ls->path = argv[i];
			ls->next = (t_ls *)malloc(sizeof(t_ls));
			ls = ls->next;
			ls->next = NULL;
		}
		i++;
	}
	return (ls);
}

int main(int c, char **v)
{

	t_ls *ls;

	ls = (t_ls *)malloc(sizeof(t_ls));
	if (!ls)
		ft_error("Error: malloc failed");
	if (c == 1)
	{
		ls = _ls(".", ls);
		ls = ft_sort(ls);
		// ls_printer(ls);
	}
	else if (c > 1 && v[1])
	{
		ls = checkargs(c, v, ls);
		if(checkFlags(v[1], ls))
		{
			ls = _ls(v[1], ls);
			puts("Good");
			// ls = ft_sort(ls);
		}
		else
			puts("Bad");
		// ls_printer(ls);
	}
	else ft_error("Error: too many arguments");
	return (0);
}
