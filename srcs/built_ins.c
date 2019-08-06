/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   built_ins.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 08:59:13 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 09:28:51 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void    ft_exit()
{
    ft_printf("\033[0;31mGoodbye Dave.\033[0m\n");
}

void    ft_env()
{
    int i;

    i = 0;
    ft_printf("\n\033[1;32m**************************ENVIRONMENT VARIABLES****************************\033[0m\n\n");
    while (environment[i] != NULL)
	{
		ft_printf("%s\n", environment[i]);
		i++;
	}
    ft_printf("\n\033[1;32m**************************ENVIRONMENT VARIABLES****************************\033[0m\n\n");
}