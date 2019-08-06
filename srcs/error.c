/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:19:59 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 14:46:03 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	ft_error(void)
{
	if (error == 1)
		ft_printf("\033[0;31mMemmory could not be allocated.\033[0m\n");
	else if (error == 2)
		ft_printf("\033[0;31mNot a valid command.\033[0m\n");
	else if (error == 3)
		ft_printf("\033[0;31mTo few arguments.\033[0m\n");
	error = 0;
}
