/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 10:14:49 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/20 15:47:37 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ndest;
	size_t	nsrc;

	ndest = ft_strlen(dest);
	nsrc = ft_strlen(src);
	if (size <= ndest)
		return (size + nsrc);
	if (nsrc < size - ndest)
	{
		ft_memcpy(dest + ndest, src, nsrc);
		dest += ndest + nsrc;
	}
	else
	{
		ft_memcpy(dest + ndest, src, size - ndest - 1);
		dest += size - 1;
	}
	*dest = '\0';
	return (nsrc + ndest);
}
