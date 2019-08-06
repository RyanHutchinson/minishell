/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:37:11 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:31:34 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	size_t			loop;
	unsigned char	*ptr;
	unsigned char	find;

	loop = 0;
	find = (unsigned char)c;
	ptr = (unsigned char*)str;
	while (loop < len)
		if (ptr[loop++] == find)
			return ((unsigned char*)&ptr[loop - 1]);
	return (NULL);
}
