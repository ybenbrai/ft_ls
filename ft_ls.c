/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:21:19 by ybenbrai          #+#    #+#             */
/*   Updated: 2021/04/04 17:19:27 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <stdio.h>
#include <dirent.h>
#include <dirent.h>
#include <string.h>

int main(int argc, char **argv)
{
	DIR *dir;
	struct dirent *dirent;

	if (argc > 1)
	{
		dir = opendir(argv[1]);
		if (dir == NULL)
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
