/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:48:44 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/20 14:26:46 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	index1;
	size_t	index2;

	index1 = 0;
	while (dest[index1] != '\0')
		index1 = index1 + 1;
	index2 = 0;
	while (src[index2] != '\0' && index2 < n)
	{
		dest[index1] = src[index2];
		index2 = index2 + 1;
		index1 = index1 + 1;
	}
	dest[index1] = '\0';
	return (dest);
}
