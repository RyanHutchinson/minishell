/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:40:11 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:31:45 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	size_t			loop;
	unsigned char	*pr;

	loop = 0;
	pr = (unsigned char*)ptr;
	while (loop < len)
		pr[loop++] = value;
	return (ptr);
}
