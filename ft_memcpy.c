/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:48:17 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/21 14:00:38 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*des;
	const char	*source;

	i = 0;
	des = (char *)dst;
	source = (char *)src;
	if (n == 0 || (!des && !source))
		return (dst);
	while (i < n)
	{
		des[i] = source[i];
		i++;
	}
	return (dst);
}
