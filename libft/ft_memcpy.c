/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:40:43 by pbomber           #+#    #+#             */
/*   Updated: 2021/10/26 00:01:20 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;

	ps = (unsigned char *) src;
	pd = (unsigned char *) dest;
	if (!dest && !src)
		return (dest);
	while (n--)
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	return (dest);
}
