/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 09:18:38 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:36:13 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strtrim(char const *s)
{
	size_t			len;
	unsigned int	start;
	unsigned int	end;
	char			*new;

	start = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	if (ft_strlen(s) == 0)
		return (ft_strnew(1));
	while (ft_iswhitespace(s[start]) == 1 && s[start] != '\0')
		start++;
	end = len - 1;
	while (ft_iswhitespace(s[end]) == 1 && end >= start)
		end--;
	len = end - start + 1;
	if (!(new = ft_strsub(s, start, len)))
		return (NULL);
	return (new);
}
