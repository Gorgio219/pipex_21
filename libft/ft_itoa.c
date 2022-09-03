/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:07:52 by pbomber           #+#    #+#             */
/*   Updated: 2021/10/24 18:04:40 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	len_n(int long num)
{
	int	len_num;

	len_num = 0;
	if (num <= 0)
		len_num = 1;
	while (num)
	{
		num = num / 10;
		len_num++;
	}
	return (len_num);
}

char	*ft_itoa(int n)
{
	char		*s;
	int			len;
	int long	n2;

	n2 = n;
	len = len_n(n2);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	if (n2 <= 0)
	{
		n2 *= -1;
		s[0] = '-';
	}
	s[len] = '\0';
	if (n2 == 0)
		s[len - 1] = '0';
	while (len && n2 != 0)
	{
		len--;
		s[len] = n2 % 10 + '0';
		n2 = n2 / 10;
	}
	return (s);
}
