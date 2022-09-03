/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:22:38 by pbomber           #+#    #+#             */
/*   Updated: 2021/10/26 00:02:09 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	l_str;

	if (!s || !f)
		return (NULL);
	l_str = ft_strlen(s);
	str = (char *)malloc(l_str + 1);
	if (!str)
		return (NULL);
	str[l_str] = '\0';
	while (l_str > 0)
	{
		l_str--;
		str[l_str] = f((unsigned int)l_str, s[l_str]);
	}
	return (str);
}
