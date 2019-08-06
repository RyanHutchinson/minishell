/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:44:13 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 10:35:01 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include "../libft/includes/libft.h"
# include <sys/wait.h>
# include <unistd.h>
# include <stdlib.h>
# include <readline/readline.h>
# include <readline/history.h>

char    **environment;
int     error;

void    ft_env();
void	ft_set_env(char **env);

void    ft_get_prompt(char **prompt);
void    ft_command_parser(char *commands);

//-------------BUILT INS--------------------------------------------------------
void    ft_exit();
//-------------BUILT INS--------------------------------------------------------

//-------------ERROR SHIT-------------------------------------------------------
void    ft_error();
//-------------ERROR SHIT-------------------------------------------------------
#endif
