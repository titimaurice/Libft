/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 12:01:28 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/17 14:31:06 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	l;
	size_t	k;

	i = 0;
	l = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] && l <= n)
	{
		j = 0;
		k = i;
		while (s1[i] && s2[j] && s1[i] == s2[j] && i < n)
		{
			i++;
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)&s1[k]);
		i = k;
		i++;
		l++;
	}
	return (NULL);
}
