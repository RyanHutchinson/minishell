/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:53:19 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 15:26:49 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_env(void)
{
	int i;

	i = 0;
	system("clear");
	ft_printf("\n\033[1;32m||******ENVIRONMENT VARIABLES*******||\033[0m\n\n");
	while (environment[i] != NULL)
	{
		ft_printf("%s\n", environment[i]);
		i++;
	}
	ft_printf("\n\033[1;32m||******ENVIRONMENT VARIABLES*******||\033[0m\n\n");
}

void	ft_set_env(char **commands)
{
	(void)commands;
	ft_printf("\n\033[1;35m'setenv' not currently implememted.\033[0m\n\n");
	// int i;
	// int len;

	// i = 0;
	// while (environment[i])
	// {
	// 	if (commands[1] == NULL)
	// 	{
	// 		error = 3;
	// 		break;
	// 	}
	// 	len = ft_strlen(commands[1]);
	// 	if (ft_strnstr(environment[i], commands[1], len))
	// 		{
	// 			ft_strdel(environment[i]);
	// 			environment[i] = ft_strjoin(commands[1], commands[2]);
	// 			break;
	// 		}
	// 	i++;
	// 	if (environment[i] == NULL)
	// 	{
			
	// 	}
	// }
	
}

void	ft_unset_env(char **commands)
{
	(void)commands;
	ft_printf("\n\033[1;35m'unsetenv' not currently implememted.\033[0m\n\n");
}
