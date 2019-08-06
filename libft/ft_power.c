/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:57:19 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:31:52 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int nb, int pwr)
{
	if (pwr < 0)
		return (0);
	if (pwr == 0)
		return (1);
	if (pwr > 1)
		return (nb * (ft_power(nb, pwr - 1)));
	else
		return (nb);
}
