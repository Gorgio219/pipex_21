/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:29:15 by pbomber           #+#    #+#             */
/*   Updated: 2021/10/26 00:01:15 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	character;

	ptr = (unsigned char *) s;
	character = (unsigned char) c;
	while (n--)
	{
		if (*ptr == character)
		{
			return (ptr);
		}
		ptr++;
	}
	return (NULL);
}
