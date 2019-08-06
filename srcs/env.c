/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:53:19 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 13:28:18 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_env(void)
{
	int i;

	i = 0;
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
	// (void)commands;
	// ft_printf("\n\033[1;35m'setenv' not currently implememted.\033[0m\n\n");

	
}

void	ft_unset_env(char **commands)
{
	(void)commands;
	ft_printf("\n\033[1;35m'unsetenv' not currently implememted.\033[0m\n\n");
}
