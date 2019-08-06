/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 08:49:47 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 10:29:02 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void ft_command_parser(char *commands)
{
	char **arguments;

	if (!(arguments = ft_strsplit(commands, ' ')))
		error = 1;
	if (ft_strequ(arguments[0], "env"))
		ft_env();
	else if (ft_strequ(arguments[0], "exit"))
	{
		ft_exit();
		error = -1;
	}
	else
		error = 2;
}