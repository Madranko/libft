/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmotov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 08:57:55 by mmotov            #+#    #+#             */
/*   Updated: 2017/11/12 09:26:38 by mmotov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	t_list	*last;
	int		i;

	last = lst;
	i = 0;
	if (lst)
	{
		while (last)
		{
			last = last->next;
			i++;
		}
	}
	return (i);
}
