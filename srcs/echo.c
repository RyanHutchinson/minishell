/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:49:07 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 13:14:54 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_echo(char **commands)
{
	int i;

	i = 1;
	ft_strequ(commands[1], "-n") ? i++ : 0;
	while (commands[i])
	{
		ft_printf("%s", commands[i]);
		if (commands[++i])
			ft_printf(" ");
	}
	if (!(ft_strequ(commands[1], "-n")))
		printf("\n");
}
