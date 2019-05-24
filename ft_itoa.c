/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:34:10 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/22 15:06:28 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_int_len(int n)
{
	if (n < 0)
		n = -n;
	if (n < 10)
		return (1);
	else
		return (ft_int_len(n / 10) + 1);
}

char			*ft_itoa(int a)
{
	char			*str;
	int				len;
	int				neg;
	unsigned int	n;

	if (a == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	if (a < 0)
		neg = 1;
	n = (a < 0) ? -a : a;
	len = neg ? ft_int_len(n) : ft_int_len(n) - 1;
	if ((str = ft_strnew(len + neg + 1)) == NULL)
		return (NULL);
	while (len >= 0)
	{
		str[len] = (n % 10) + '0';
		len--;
		n /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
