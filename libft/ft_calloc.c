/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:45:40 by pbomber           #+#    #+#             */
/*   Updated: 2021/10/26 00:00:45 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*p;

	p = (void *)malloc(num * size);
	if (!p)
		return (NULL);
	ft_bzero(p, size * num);
	return (p);
}
