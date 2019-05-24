/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamauric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:52:06 by mamauric          #+#    #+#             */
/*   Updated: 2019/05/22 15:43:21 by mamauric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		i;
	int		is_neg;
	long	result;
	int		a;

	result = 0;
	i = 0;
	is_neg = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			is_neg = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = result;
		result = result * 10 + (str[i] - 48);
		i++;
		if (a && (a ^ result) < 0)
			return ((is_neg == 1) ? -1 : 0);
	}
	if (is_neg == 1)
		return (result * -1);
	return (result);
}
