/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:50:09 by pbomber           #+#    #+#             */
/*   Updated: 2021/10/26 00:01:26 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;
	size_t			n2;

	n2 = 0;
	p = (unsigned char *)str;
	while (n2 < n)
	{
		p[n2] = (unsigned char)c;
		n2++;
	}
	return (p);
}
