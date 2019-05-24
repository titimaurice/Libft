/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:32:40 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/20 10:05:55 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*b_ptr;

	i = 0;
	b_ptr = (unsigned char *)b;
	while (i < len)
	{
		b_ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
