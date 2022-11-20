/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:52:13 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/20 20:53:25 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

// function sort_alpha
t_ls    *sort_alpha(t_ls *ls)
{
    t_ls *tmp;
    char *tmp_name;

    tmp = ls;
    while (tmp->next != NULL)
    {
        if (ft_strcmp(tmp->name, tmp->next->name) > 0)
        {
            tmp_name = tmp->name;
            tmp->name = tmp->next->name;
            tmp->next->name = tmp_name;
            tmp = ls;
        }
        else
            tmp = tmp->next;
    }
    return (ls);
}