/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:09:06 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:32:26 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strdupdel(char **str)
{
	char	*tmp;

	tmp = ft_strdup(*str);
	ft_strdel(str);
	return (tmp);
}
