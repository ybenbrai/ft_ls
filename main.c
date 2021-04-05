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

int main(int argc, char **argv)
{
	DIR *dir;
	struct dirent *dirent;

	if (argc > 1)
	{
		dir = opendir(argv[1]);
		if (!dir)
		{
			perror("Unable to read directory");
			return (1);
		}
		while ((dirent = readdir(dir)))
		{
			if (strcmp(dirent->d_name, ".") && strcmp(dirent->d_name, ".."))
				printf("%s\n", dirent->d_name);
		}
		closedir(dir);
	}
	return (0);
}
