/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 12:00:31 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/20 10:24:51 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *a;

	a = (0);
	while (*s)
	{
		if (*s == c)
			a = (char*)s;
		++s;
	}
	if (a)
		return (a);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
