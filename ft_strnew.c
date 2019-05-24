/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:06:27 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/21 16:37:37 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*buff;
	size_t	i;

	buff = ((char *)malloc(sizeof(*buff) * size + 1));
	if (buff == NULL)
		return (NULL);
	i = 0;
	ft_memset(buff, '\0', size + 1);
	return (buff);
}
