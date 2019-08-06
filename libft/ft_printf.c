/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 09:23:22 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:31:54 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int				ft_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	return (ft_format_all(format, args));
}
