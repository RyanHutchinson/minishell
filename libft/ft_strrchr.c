/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:46:55 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:34:48 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int loop;

	loop = ft_strlen(str) + 1;
	while (--loop >= 0)
		if (str[loop] == (char)c)
			return ((char*)&str[loop]);
	return (NULL);
}
