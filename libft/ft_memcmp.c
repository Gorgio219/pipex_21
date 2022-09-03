/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:38:31 by pbomber           #+#    #+#             */
/*   Updated: 2021/10/26 00:01:18 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*p_arr1;
	unsigned char	*p_arr2;

	p_arr1 = (unsigned char *) arr1;
	p_arr2 = (unsigned char *) arr2;
	while (n)
	{
		if (*p_arr1 != *p_arr2)
			return (*p_arr1 - *p_arr2);
		p_arr1++;
		p_arr2++;
		n--;
	}
	return (0);
}
