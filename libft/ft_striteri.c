/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:57:06 by pbomber           #+#    #+#             */
/*   Updated: 2021/10/26 00:01:53 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	l_str;

	if (s && f)
	{
		l_str = 0;
		while (s[l_str])
		{
			f((unsigned int)l_str, &s[l_str]);
			l_str++;
		}
	}
}
