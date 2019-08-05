/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:20:06 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/05 17:11:16 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/minishell.h"

int main (int ac, char **av, char **env)
{
	int i = 0;
	char *line;
	char *prompt;
	(void)ac;
	(void)av;

	system("clear");
	ft_set_env(env);
	ft_get_prompt(&prompt);


	while(1)
	{
		ft_printf("\033[1;32m%s\033[0m", prompt);
	    line = readline("");
	    if (ft_strequ(line, "exit"))
		{
			ft_printf("\033[0;31mGOODBYE DAVE\033[0m\n");
			ft_strdel(&prompt);
	        exit (0);
		}
		if (ft_strequ(line, "env"))
			{
				ft_printf("\n\033[1;32m**************************ENVIRONMENT VARIABLES****************************\033[0m\n\n");
				while (environment[i] != NULL)
				{
					ft_printf("%s\n", environment[i]);
					i++;
				}
				ft_printf("\n\033[1;32m**************************ENVIRONMENT VARIABLES****************************\033[0m\n\n");
				i = 0;
			}
	    else
		{
			ft_printf("\033[1;34mYou typed\033[0m \033[1;36m->\033[0m %s\n", line);
			if (ft_strstr(line, "fuck you"))
				printf("\033[0;31mThat wasn't a very nice thing to say...  [T-T]\033[0m\n");
		}
	}
	return(0);
}

//------      \033[1;32m%s\033[0m