/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:14:58 by pbomber           #+#    #+#             */
/*   Updated: 2022/03/18 21:29:15 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error(char *file)
{
	write(2, "Error ", 7);
	if (file)
		write(2, &(*file), ft_strlen(file));
	write(2, "\n", 1);
	exit(EXIT_FAILURE);
}

void	checker_fd(int *fd0, int *fd1, char **argv)
{
	*fd0 = open(argv[1], O_RDONLY | O_CREAT, 0444);
	if (*fd0 == -1)
		error(argv[1]);
	*fd1 = open(argv[4], O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (*fd1 == -1)
		error(argv[4]);
}
