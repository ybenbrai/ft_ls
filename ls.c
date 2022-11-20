/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:34:29 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/18 15:24:31 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void _ls(const char *dir, int op_a, int op_l)
{
	// Here we will list the directory
	struct dirent *d;
	DIR *dh = opendir(dir);
	if (!dh)
	{
		if (errno == ENOENT)
		{
			// If the directory is not found
			perror("Directory doesn't exist");
		}
		else
		{
			// If the directory is not readable then throw error and exit
			perror("Unable to read directory");
		}
		exit(EXIT_FAILURE);
	}
	// While the next entry is not readable we will print directory files
	while ((d = readdir(dh)) != NULL)
	{
		// If hidden files are found we continue
		if (!op_a && d->d_name[0] == '.')
			continue;
		printf("%s  ", d->d_name);
		if (op_l)
			printf("\n");
	}
	if (!op_l)
		printf("\n");
}