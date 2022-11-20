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
	(void)v;
	t_ls *ls;

	ls = (t_ls *)malloc(sizeof(t_ls));
	if(!ls)
		ft_error("Error: malloc failed");
	if (c == 1)
	{
		ls =_ls(".", ls);
		// printf("Printing... %s\n",ls->name);
		// function to sort ls->name by alphabetical order
		// puts("Printing ls...\n");
		ls_printer(ls);
	}
}
	// }
	// else if (argc == 2)
	// {
	// 	if (argv[1][0] == '-')
	// 	{
	// 		// Checking if option is passed
	// 		// Options supporting: a, l
	// 		int op_a = 0, op_l = 0;
	// 		char *p = (char *)(argv[1] + 1);
	// 		while (*p)
	// 		{
	// 			if (*p == 'a')
	// 				op_a = 1;
	// 			else if (*p == 'l')
	// 				op_l = 1;
	// 			else
	// 			{
	// 				perror("Option not available");
	// 				exit(EXIT_FAILURE);
	// 			}
	// 			p++;
	// 		}
	// 		_ls(".", op_a, op_l);
	// 	}
	// }
