/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:56:31 by ybenbrai          #+#    #+#             */
/*   Updated: 2022/11/21 14:30:18 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
static void    ls_printer_basic(t_ls *ls)
{
    t_ls *tmp;
    
    tmp = ls;
    while (tmp->next)
    {
        // ls->a == 0 && 
        if (tmp->name[0] == '.')
        {
            tmp = tmp->next;
            continue ;
        }
        printf("%s", tmp->name);
        if (tmp->next)
        {
            tmp = tmp->next;
            printf("        ");
        }
    }
    free(tmp);
}
void    ls_printer(t_ls *ls)
{
    // print the files and directories in the order they were given in the command line arguments
    // if the -r flag is given, print the files and directories in reverse order
        if(ls->flag_n == 1)
            ls_printer_basic(ls);
        // if (ls->flag_r == 1)
        // {
        //     if (ls->next)
        //         ls = ls->next;
        //     else
        //         break;
        // }
        // if (ls->flag_l == 1)
        //     ls_printer_l(ls);
        // else
        // if (ls->flag_r == 1)
        // {
        //     if (ls->prev)
        //         ls = ls->prev;
        //     else
        //         break;
        // }
        // else
    
}