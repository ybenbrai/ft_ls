/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:44:49 by ybenbrai          #+#    #+#             */
/*   Updated: 2021/04/05 14:50:34 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
#define FT_LS_H

#include "libft/libft.h"
#include <time.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_ls
{
    char            *name;
    struct  s_ls    *next;
    struct  s_ls    *prev;
    char             flag;
    char            *path;
    char            *time;
    char            *mode;
    char            *link;
    char            *user;
    char            *group;
    char            *size;
    char            *blocks;

}				t_ls;

t_ls    *_ls(const char *dir, t_ls *ls);
t_ls    *ft_sort(t_ls *ls);
void    ls_printer(t_ls *ls);

#endif