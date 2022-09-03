/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:46:53 by pbomber           #+#    #+#             */
/*   Updated: 2021/10/26 00:01:24 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;

	ps = (unsigned char *)src;
	pd = (unsigned char *)dest;
	if (src < dest)
	{
		while (n--)
			pd[n] = ps[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
