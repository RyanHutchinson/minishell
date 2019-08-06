/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:22:23 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:32:04 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	size_t i;

	i = 0;
	if (str != NULL)
	{
		while (i < ft_strlen(str))
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
	}
}
