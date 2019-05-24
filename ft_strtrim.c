/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:32:29 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/22 16:50:07 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_first_space(char const *str)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
	{
		count++;
		i++;
	}
	return (count);
}

static size_t		ft_end_space(char const *str)
{
	size_t	i;
	size_t	count;
	size_t	len;

	len = ft_strlen(str);
	i = len - 1;
	if (len == 0)
		return (0);
	count = 0;
	while (i > 0 && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
	{
		count++;
		i--;
	}
	if (i == 0)
		return (0);
	return (count);
}

char				*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	end;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if (len <= 0)
		return (ft_strdup(""));
	i = ft_first_space(s);
	end = ft_end_space(s);
	j = 0;
	str = ft_strnew(len - i - end);
	if (!str)
		return (NULL);
	while (s[i] != '\0' && i < len - end)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	return (str);
}
