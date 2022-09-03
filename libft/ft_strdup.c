/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egorafanasev <egorafanasev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:30:54 by pbomber           #+#    #+#             */
/*   Updated: 2022/03/03 19:35:24 by egorafanase      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	num;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	num = 0;
	while (*s)
	{
		s++;
		num++;
	}
	p = (char *)malloc(sizeof(char) * (num + 1));
	if (!p)
		return (NULL);
	while (num + 1)
	{
		p[num] = *(char *)s;
		num--;
		s--;
	}
	return (p);
}
