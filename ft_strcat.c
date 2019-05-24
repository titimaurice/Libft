/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:46:31 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/17 13:22:35 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int index1;
	int index2;

	index1 = 0;
	while (s1[index1] != '\0')
		index1 = index1 + 1;
	index2 = 0;
	while (s2[index2] != '\0')
	{
		s1[index1 + index2] = s2[index2];
		index2 = index2 + 1;
	}
	s1[index1 + index2] = '\0';
	return (s1);
}
