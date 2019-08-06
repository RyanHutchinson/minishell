/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:22:09 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:32:44 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
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
		new[i] = f(i, str[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
