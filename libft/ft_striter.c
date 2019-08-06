/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:44:42 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:32:35 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_striter(char *str, void (*f)(char *))
{
	int i;

	i = 0;
	if (str != NULL && f != NULL)
	{
		while (str[i] != '\0')
		{
			f(&str[i]);
			i++;
		}
	}
}
