/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:37:08 by fremoor           #+#    #+#             */
/*   Updated: 2019/08/06 10:41:55 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_putendl(char const *s)
{
	if (s == NULL)
		return ((void)NULL);
	while (*s != '\0')
		write(1, &(*s++), 1);
	ft_putchar('\n');
}
