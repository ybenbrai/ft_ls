/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:56:31 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/21 22:57:13 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    ls_printer(t_ls *ls)
{
    int i;

    i = 0;
    while(ls->next != NULL)
    {
        if(i < 7)
        {
            printf("%s       ", ls->name);
            i++;
            
        }
        else
        {
            printf("%s\n", ls->name);
            i = 0;
        }
        ls = ls->next;
    }
    printf("\n");
}        