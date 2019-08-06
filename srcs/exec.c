/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:09:22 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 13:22:49 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_exec_sys(char **commands)
{
	if (ft_strequ(commands[0], "ls"))
		ft_printf("\n\033[1;35mSystem call 'ls' not implementd.\033[0m\n\n");
	else if (ft_strequ(commands[0], "cat"))
		ft_printf("\n\033[1;35mSystem call 'cat' not implementd.\033[0m\n\n");
	else
		error = 2;
}
