/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 09:10:59 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:31:22 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_itoa_base(int n, int base)
{
	int		temp;
	char	*str;
	int		size;

	temp = n;
	size = 0;
	while (temp > 0)
	{
		temp = temp / base;
		size++;
	}
	str = ft_strnew(size + 1);
	size--;
	while (size >= 0)
	{
		temp = n % base;
		n = n / base;
		if (temp < 10)
			str[size] = temp + '0';
		else
			str[size] = (temp - 10) + 'a';
		size--;
	}
	return (str);
}
