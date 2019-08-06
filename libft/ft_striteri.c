/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:51:47 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:32:36 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (str != NULL && f != NULL)
	{
		while (str[i] != '\0')
		{
			f(i, &str[i]);
			i++;
		}
	}
}
