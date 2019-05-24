/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:15:18 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/21 15:59:40 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	if (s && f)
	{
		len = ft_strlen(s);
		str = ft_strnew(len);
		if (str == NULL)
			return (NULL);
		while (i < len)
		{
			str[i] = f(s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
