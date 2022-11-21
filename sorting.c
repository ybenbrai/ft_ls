/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:52:13 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/21 20:51:11 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

// ft_isupper

// ft_strswap
void    ft_strswap(char **a, char **b)
{
    char *tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

// ft_swap(tmp, tmp->next
t_ls    *ft_swap(t_ls *ls)
{
   t_ls *tmp;
   
    tmp = ls;
    while(tmp->next)
    {
        if (ft_isupper(tmp->name[0]) && ft_islower(tmp->next->name[0]))
        {
            ft_strswap(&tmp->name, &tmp->next->name);
            tmp = ls;
            puts(tmp->name);
        }
        else
            tmp = tmp->next;
    }
    return (ls);
}
// function to place the upper case names first
t_ls	*sortAC(t_ls *ls)
{
    t_ls *tmp;

    tmp = ls;
    while(tmp->next)
    {
        if(ft_isupper(tmp->name[0]) && ft_islower(tmp->next->name[0]))
        {
            tmp = ft_swap(tmp);
            tmp = ls;
        }
        else
            tmp = tmp->next;
    }
    return (ls);
}

void    printf_space(int i)
{
    while (i > 0)
    {
        printf(" ");
        i--;
    }
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
}    
t_ls    *ft_sort(t_ls *ls)
{
    
    if(ls->flag_n == 1){
	
        ls = sortAC(ls);
    }
        // ls = sortByAlpha(ls);
    print_ls(ls);
    return(ls);
}
