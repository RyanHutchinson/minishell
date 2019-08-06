/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_builders.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 15:20:27 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 15:26:37 by rhutchin         ###   ########.fr       */
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
////////////////////everything down here is borked and needs a hard think
// void	ft_realloc_env_plus(char *toadd)
// {
// 	int i;

// 	i = 0;
// 	while (environment[i] != NULL)
// 		i++;
// 	if ((environment = malloc(sizeof(char *) * i + 2)))
// 	{
// 		i = 0;
// 		while (env[i] != NULL)
// 		{
// 			environment[i] = ft_strdup(env[i]);
// 			i++;
// 		}
// 		error = 0;
// 	}
// 	else
// 		error = 1;
// }

// void	ft_realloc_env_minus(char **env)
// {
// 	int i;

// 	i = 0;
// 	while (env[i] != NULL)
// 		i++;
// 	if ((environment = malloc(sizeof(char *) * i)))
// 	{
// 		i = 0;
// 		while (env[i] != NULL)
// 		{
// 			environment[i] = ft_strdup(env[i]);
// 			i++;
// 		}
// 		error = 0;
// 	}
// 	else
// 		error = 1;
// }

