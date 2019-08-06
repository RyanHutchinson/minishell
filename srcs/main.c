/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:20:06 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 13:19:39 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int	main(int ac, char **av, char **env)
{
	char *line;
	char *prompt;

	(void)av;
	(void)ac;
	system("clear");
	ft_get_env(env);
	ft_get_prompt(&prompt);
	while (1)
	{
		ft_printf("\033[1;32m%s\033[0m", prompt);
		line = readline("");
		add_history(line);
		if (error == 0)
			ft_command_parser(line);
		if (error > 0)
			ft_error();
		if (error == -1)
		{
			ft_strdel(&prompt);
			exit(0);
		}
	}
	return (0);
}
