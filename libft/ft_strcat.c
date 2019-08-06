/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:40:40 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:32:17 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	return (ft_strncat(str1, str2, ft_strlen(str1) + ft_strlen(str2) + 1));
}
