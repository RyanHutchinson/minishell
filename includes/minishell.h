/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:44:13 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 15:23:38 by rhutchin         ###   ########.fr       */
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

//-------------ENVIRONMENT------------------------------------------------------
void	ft_get_env(char **env);
void	ft_realloc_env_plus(char **env);
void	ft_realloc_env_minus(char **env);
//-------------ENVIRONMENT------------------------------------------------------

void    ft_get_prompt(char **prompt);
void    ft_command_parser(char *commands);

//-------------BUILT INS--------------------------------------------------------
int		ft_is_builtin(char *command);
void	ft_exec_builtin(char **commands);
void    ft_env();
void    ft_set_env(char **commands);
void    ft_unset_env(char **commands);
void	ft_cd(char **commands);
void	ft_echo(char **commands);
void    ft_exit();
//-------------BUILT INS--------------------------------------------------------

//-------------SYSTEM EXECUTES--------------------------------------------------
void    ft_exec_sys(char **commands);
//-------------SYSTEM EXECUTES--------------------------------------------------

//-------------ERROR SHIT-------------------------------------------------------
void    ft_error();
//-------------ERROR SHIT-------------------------------------------------------
#endif
