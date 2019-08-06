/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:36:38 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:31:34 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	size_t			loop;
	unsigned char	find;

	loop = 0;
	find = (unsigned char)c;
	ptr = (unsigned char*)dest;
	ptr2 = (unsigned char*)src;
	while (loop < len)
	{
		ptr[loop] = ptr2[loop];
		if (ptr[loop] == find)
			return ((void*)ptr + loop + 1);
		loop++;
	}
	return (NULL);
}
