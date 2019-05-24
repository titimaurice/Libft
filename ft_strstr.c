/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:23:35 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/20 14:29:35 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;
	int size;

	size = 0;
	while (to_find[size] != '\0')
		size++;
	if (size == 0)
		return ((char *)str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (j == size)
				return ((char *)str + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
