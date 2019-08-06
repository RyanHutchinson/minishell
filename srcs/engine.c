/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 08:49:47 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 13:22:27 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_command_parser(char *commands)
{
	char **cmds;

	if ((cmds = ft_strsplit(commands, ' ')))
		ft_is_builtin(cmds[0]) ? ft_exec_builtin(cmds) : ft_exec_sys(cmds);
	else
		error = 1;
}
