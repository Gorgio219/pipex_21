/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:30:54 by pbomber           #+#    #+#             */
/*   Updated: 2021/10/26 00:01:49 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	world_counter(char const *s, char c)
{
	unsigned int	i;
	int				value;

	i = 0;
	value = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			value++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (value);
}

static char	*ft_createstr(char const *s, size_t len)
{
	char	*str;

	str = malloc(sizeof(*str) * (len + 1));
	ft_strlcpy(str, (char *)s, (len + 1));
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tmp;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	tmp = (char **)malloc(sizeof(char *) * (world_counter(s, c) + 1));
	if (!tmp)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			tmp[k++] = ft_createstr(s + j, i - j);
	}
	tmp[k] = NULL;
	return (tmp);
}
