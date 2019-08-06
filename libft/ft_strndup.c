/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:29:37 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:33:52 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strndup(const char *str, size_t len)
{
	char	*new;

	if (!(new = ft_strnew(len)))
		return (NULL);
	ft_strncpy(new, str, len + 1);
	new[len] = '\0';
	return (new);
}
