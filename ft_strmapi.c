/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:16:16 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/21 16:32:47 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	if (s && f)
	{
		i = 0;
		len = ft_strlen(s);
		str = ft_strnew(len);
		if (str == NULL)
			return (NULL);
		while (i < len)
		{
			str[i] = f(i, s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
