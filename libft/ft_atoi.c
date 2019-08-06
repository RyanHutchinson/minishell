/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:26:15 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:30:46 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	ret;
	int	i;

	sign = 1;
	ret = 0;
	i = 0;
	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
	while (ft_isdigit(str[i]) && str[i] != '\0')
	{
		ret *= 10;
		ret += str[i] - '0';
		i++;
	}
	return (ret * sign);
}
