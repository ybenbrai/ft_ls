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

void	print_ls(char *path)
{
	DIR				*dir;
	struct dirent	*sd;

	dir = opendir(path);
	if (dir == NULL)
	{
		ft_putstr("ft_ls: ");
		ft_putstr(path);
		ft_putstr(": No such file or directory");
	}
	else
	{
		while ((sd = readdir(dir)) != NULL)
		{
			sort_ls(sd->d_name);
			if (sd->d_name[0] != '.')
			{
				// sort sd->d_name as the command ls in the terminal
				ft_putstr(sd->d_name);
				ft_putstr("  ");
			}
		}
	}
	ft_putchar('\n');
	closedir(dir);
}

int main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
		print_ls(".");
	return (0);
}
// if (argc > 1)
// {
// 	dir = opendir(argv[1]);
// 	if (!dir)
// 	{
// 		perror("Unable to read directory");
// 		return (1);
// 	}
// 	while ((dirent = readdir(dir)))
// 	{
// 		if (strcmp(dirent->d_name, ".") && strcmp(dirent->d_name, ".."))
// 			printf("%s\n", dirent->d_name);
// }
