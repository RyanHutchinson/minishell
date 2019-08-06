/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:01:14 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:32:42 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strmap(const char *str, char (*f)(char))
{
	int		i;
	int		len;
	char	*new;

	if (str == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(str);
	if (!(new = ft_strnew(len)))
		return (NULL);
	while (i < len)
	{
		new[i] = f(str[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
