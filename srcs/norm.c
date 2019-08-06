#include "../includes/minishell.h"

void    ft_set_env(char **env)
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

void    ft_get_prompt(char **prompt)
{
	int i = 0;
	char *tmp = NULL;

	while (environment[i])
	{
		if (ft_strstr(environment[i], "HOME="))
		{
			tmp = ft_strsub(environment[i], 5, 4096);
			i = 0;
			break;
		}
		i++;
	}
	int j = ft_strlen(tmp);
	while (environment[i])
	{
		if (ft_strnstr(environment[i], "PWD=", 4))
		{
			tmp = ft_strsub(environment[i],j + 4, 4096);
			break;
		}
		i++;
	}
	*prompt = ft_strjoin(tmp, ": ");
}