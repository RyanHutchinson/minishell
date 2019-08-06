/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:52:38 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:30:56 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_foreach(int *tab, int len, void (*f)(int))
{
	int i;

	i = 0;
	while (i < len)
	{
		f(tab[i]);
		i++;
	}
}
