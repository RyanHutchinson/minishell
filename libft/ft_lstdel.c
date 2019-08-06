/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:52:30 by rhutchin          #+#    #+#             */
/*   Updated: 2019/08/06 19:31:27 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list *ptr;
	t_list *ptrnxt;

	ptr = *alst;
	while (ptr->next != NULL)
	{
		ptrnxt = ptr->next;
		del(ptr, ptr->content_size);
		ptr = ptrnxt;
	}
	del(ptr, ptr->content_size);
	*alst = NULL;
}
