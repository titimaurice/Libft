/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 11:08:37 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/21 15:06:47 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (t_list *elem))
{
	t_list	*tmp;

	if (lst && f)
	{
		tmp = lst;
		while (tmp->next != NULL)
		{
			f(tmp);
			tmp = tmp->next;
		}
		f(tmp);
	}
}
