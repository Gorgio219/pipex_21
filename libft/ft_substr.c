/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:22:26 by pbomber           #+#    #+#             */
/*   Updated: 2021/10/26 00:02:33 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (len)
	{
		str[i] = (char)s[start];
		start++;
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
