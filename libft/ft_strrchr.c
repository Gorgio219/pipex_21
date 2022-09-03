/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:56:47 by pbomber           #+#    #+#             */
/*   Updated: 2021/10/26 00:02:18 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	ch;

	ch = c;
	i = ft_strlen(str);
	if (ch == 0)
		return ((char *)str + i);
	while (i >= 0)
	{
		if (str[i] == ch)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
