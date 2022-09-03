/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:31:38 by pbomber           #+#    #+#             */
/*   Updated: 2021/10/25 23:50:57 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_ptnmbr(const char *s, int t)
{
	int				i;
	long long int	rtrn;

	rtrn = 0;
	i = 0;
	while ((*s > 47) && (*s < 58))
	{
		if (i > 19)
		{
			if (t == -1)
				return (0);
			else if (t == 1)
				return (-1);
		}
		rtrn = (rtrn * 10) + (int)*s - 48;
		s++;
		i++;
	}
	return (rtrn);
}

int	ft_atoi(const char *str)
{
	long long int	rtrn;
	int				token;

	token = 1;
	if (((*str >= 9) && (*str <= 13)) || (*str == 32))
	{
		while (((*str >= 9) && (*str <= 13)) || (*str == 32))
			str++;
	}
	if ((*str) == '-' || (*str) == '+')
	{
		if ((*str) == '-')
			token = -1;
		str++;
	}
	if (!((*str > 47) && (*str < 58)))
		return (0);
	rtrn = ft_ptnmbr(str, token);
	return ((int)rtrn * token);
}
