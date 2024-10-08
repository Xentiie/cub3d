/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reclaire <reclaire@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:32:58 by reclaire          #+#    #+#             */
/*   Updated: 2022/12/14 20:09:56 by reclaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current_last;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			current_last = ft_lstlast(*lst);
			current_last->next = new;
			new->prev = current_last;
		}
	}
}
