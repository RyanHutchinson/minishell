/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 08:22:59 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:30:52 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int			ft_after(t_format *tf, long len, char *str)
{
	int		i;
	long	max;

	i = 0;
	if (*str == '-')
	{
		ft_putchar('-');
		(str)++;
	}
	while ((tf->flags & 1 && tf->len > len) || tf->prec-- > len)
	{
		ft_putchar('0');
		i++;
		tf->len > 0 ? tf->len-- : tf->len;
	}
	max = (tf->prec > len && (tf->prec != 0)) ? tf->prec : len;
	ft_putstr(str);
	i += len;
	if (tf->flags & 8)
		while (tf->len-- > max)
		{
			ft_putchar(' ');
			i++;
		}
	return (i);
}
