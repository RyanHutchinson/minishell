/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:38:08 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:31:40 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int				diff;
	size_t			loop;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	loop = 0;
	diff = 0;
	ptr1 = (unsigned char*)str1;
	ptr2 = (unsigned char*)str2;
	while (diff == 0 && loop < n)
	{
		diff = ptr1[loop] - ptr2[loop];
		loop++;
	}
	return (diff);
}
