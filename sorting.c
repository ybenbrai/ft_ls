/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:52:13 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/21 22:56:19 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_ls    *ft_sortbycase(t_ls *ls)
{
    t_ls *tmp;
    char *tmp_name;
    
    tmp = ls;
    while(tmp->next->name != NULL)
    {
        if(ft_strcmp(tmp->name, tmp->next->name) > 0)
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

t_ls    *ft_sort(t_ls *ls)
{
    t_ls    *tmp;

    tmp = ls;
    // sorting by case sensitive ls->name in the linked list
    ls = ft_sortbycase(ls);
    // ls_printer(ls);
    return(ls);   
}