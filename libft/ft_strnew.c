/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:45:52 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:34:11 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	loop;

	loop = 0;
	if (!(new = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (loop <= size)
		new[loop++] = '\0';
	return (new);
}
