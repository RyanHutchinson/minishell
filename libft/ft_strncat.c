/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:44:19 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:33:15 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t len)
{
	unsigned char	*src;
	size_t			loop;
	size_t			inloop;

	src = (unsigned char *)str2;
	loop = 0;
	inloop = 0;
	while (str1[loop] != '\0')
		loop++;
	while (src[inloop] != '\0' && inloop < len)
	{
		str1[loop] = src[inloop];
		inloop++;
		loop++;
	}
	str1[loop] = '\0';
	return (str1);
}
