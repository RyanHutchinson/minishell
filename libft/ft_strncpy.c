/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:45:22 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:33:38 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	loop;
	char	*s;

	s = (char *)(src);
	loop = -1;
	while (++loop < len && loop < ft_strlen(src) && src[loop])
		dst[loop] = s[loop];
	while (loop < len)
		dst[loop++] = '\0';
	return (dst);
}
