/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:14:26 by pbomber           #+#    #+#             */
/*   Updated: 2022/03/18 21:14:48 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**search_path(char **env)
{
	char	**s;
	int		i;

	i = 0;
	while (env[i])
	{
		if (ft_strnstr(env[i], "PATH=", 5))
		{
			s = ft_split(env[i] + 5, ':');
			if (!s)
				error(NULL);
			return (s);
		}
		i++;
	}
	return (NULL);
}

char	*full_cmd(char *cmd, char **path)
{
	char	*tmp;
	char	*s;
	int		i;

	i = 0;
	while (path[i])
	{
		tmp = ft_strjoin(path[i], "/");
		s = ft_strjoin(tmp, cmd);
		free(tmp);
		if (access(s, F_OK) == 0)
			return (s);
		else
			free(s);
		i++;
	}
	error(cmd);
	return (NULL);
}
