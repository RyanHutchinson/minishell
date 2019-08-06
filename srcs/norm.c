/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:24:57 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 15:40:24 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

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
	ft_strdel(&tmp);
	tmp = ft_strnew(0);
	while (environment[i])
	{
		if (ft_strnstr(environment[i], "PWD=", 4))
		{
			tmp = ft_strsub(environment[i], j + 5, 19);
			break ;
		}
		i++;
	}
	*prompt = ft_strjoin(tmp, "/:");
	ft_strdel(&tmp);
}
