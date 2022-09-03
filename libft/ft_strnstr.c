/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:08:08 by pbomber           #+#    #+#             */
/*   Updated: 2021/10/27 17:51:51 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && len > i)
	{
		j = 0;
		while (big[i + j] == little[j] && len > (i + j))
		{
			j++;
			if (!(char)little[j])
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
