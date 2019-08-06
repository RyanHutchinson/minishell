/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 10:07:34 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:32:24 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strdup(const char *str)
{
	char	*new;

	if (!(new = ft_strnew(ft_strlen(str))))
		return (NULL);
	ft_strcpy(new, str);
	return (new);
}
