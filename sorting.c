/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:52:13 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/21 14:27:17 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

// function to print ls->name in alphabetical order case sensitive
t_ls	*sortAC(t_ls *ls)
{
    t_ls *tmp;
    t_ls *tmp2;
    char *tmp3;
    
    tmp = ls;
    tmp2 = ls;
    while (tmp->next)
    {
        while (tmp2->next)
        {
            if (ft_strcmp(tmp2->name, tmp2->next->name) > 0)
            {
                tmp3 = tmp2->name;
                tmp2->name = tmp2->next->name;
                tmp2->next->name = tmp3;
            }
            tmp2 = tmp2->next;
        }
        tmp2 = ls;
        tmp = tmp->next;
    }
    return (ls);
}

// function to print uppercase first from ls->name in alphabetical order case sensitive
static void print_ls(t_ls *ls)
{
    t_ls *tmp;
    
    tmp = ls;
    while (tmp->next)
    {
        printf("%s", tmp->name);
        if (tmp->next)
        {
            tmp = tmp->next;
            printf("        ");
        }
            
    }
    free(tmp);
    
}    











// static void    print_ls(t_ls *ls)
// {
//     t_ls *tmp;

//     tmp = ls;
//     while (tmp->next)
//     {
//         printf("%s", tmp->name);
//         if (tmp->next)
//         {
//             tmp = tmp->next;
//             printf("        ");
//         }
//     }
// }
t_ls    *sort(t_ls *ls)
{
    ls = sortAC(ls);
    print_ls(ls);
    // ls = sortByAlpha(ls);
    return(ls);
}
