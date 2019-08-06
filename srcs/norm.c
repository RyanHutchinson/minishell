/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:24:57 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 13:26:18 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_get_env(char **env)
{
	int i;

	i = 0;
	while (env[i] != NULL)
		i++;
	if ((environment = malloc(sizeof(char *) * i + 1)))
	{
		i = 0;
		while (env[i] != NULL)
		{
			environment[i] = ft_strdup(env[i]);
			i++;
		}
		error = 0;
	}
	else
		error = 1;
}

void	ft_get_prompt(char **prompt)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (environment[i])
	{
		if (ft_strstr(environment[i], "HOME="))
		{
			tmp = ft_strsub(environment[i], 5, 4096);
			i = 0;
			break ;
		}
		i++;
	}
	j = ft_strlen(tmp);
	while (environment[i])
	{
		if (ft_strnstr(environment[i], "PWD=", 4))
		{
			tmp = ft_strsub(environment[i], j + 4, 4096);
			break ;
		}
		i++;
	}
	*prompt = ft_strjoin(tmp, ": ");
}
