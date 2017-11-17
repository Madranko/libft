/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmotov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 13:23:53 by mmotov            #+#    #+#             */
/*   Updated: 2017/11/08 16:26:30 by mmotov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next_list;
	t_list	*last_list;

	last_list = *alst;
	if (alst)
	{
		if (*alst && (*del))
		{
			while (last_list)
			{
				next_list = last_list->next;
				(*del)(last_list->content, last_list->content_size);
				free(last_list);
				last_list = next_list;
				*alst = NULL;
			}
		}
	}
}
