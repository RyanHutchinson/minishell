/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replacechr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:03:46 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:32:09 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_replacechr(char **str, char f, char r)
{
	char	*ptr;

	if ((ptr = ft_strchr(*str, f)) == NULL)
		return (NULL);
	*ptr = r;
	return (ptr);
}
