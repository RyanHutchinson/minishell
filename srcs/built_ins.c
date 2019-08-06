/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   built_ins.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 08:59:13 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 13:16:10 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		ft_is_builtin(char *command)
{
	int i;

	i = 0;
	ft_strequ(command, "env") ? (i = 1) : 0;
	ft_strequ(command, "setenv") ? (i = 1) : 0;
	ft_strequ(command, "unsetenv") ? (i = 1) : 0;
	ft_strequ(command, "echo") ? (i = 1) : 0;
	ft_strequ(command, "cd") ? (i = 1) : 0;
	ft_strequ(command, "exit") ? (i = 1) : 0;
	return (i);
}

void	ft_exec_builtin(char **commands)
{
	ft_strequ(commands[0], "env") ? ft_env() : NULL;
	ft_strequ(commands[0], "setenv") ? ft_set_env(commands) : NULL;
	ft_strequ(commands[0], "unsetenv") ? ft_unset_env(commands) : NULL;
	ft_strequ(commands[0], "echo") ? ft_echo(commands) : NULL;
	ft_strequ(commands[0], "cd") ? ft_cd(commands) : NULL;
	if (ft_strequ(commands[0], "exit"))
	{
		ft_exit();
		error = -1;
	}
}

void	ft_exit(void)
{
	ft_printf("\033[0;31mGoodbye Dave.\033[0m\n");
}
