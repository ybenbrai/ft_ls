/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:52:13 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/25 00:17:06 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_ls    *ft_sortbycase(t_ls *ls)
{
    t_ls *head;
    char *tmp_name;
    
    head = ls;
    while(ls->next->name != NULL)
    {
        if(ft_strcmp(ls->name, ls->next->name) > 0)
        {
            tmp_name = ls->name;
            ls->name = ls->next->name;
            ls->next->name = tmp_name;
            ls = head;
        }
        else
            ls = ls->next;
    }
    ls = head;
    return (ls);
}

t_ls    *ft_sort(t_ls *ls)
{
    ls = ft_sortbycase(ls);
    // ls_printer(ls);
    return(ls);   
}