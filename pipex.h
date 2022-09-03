/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:16:25 by pbomber           #+#    #+#             */
/*   Updated: 2022/03/18 21:31:35 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "libft/libft.h"
# include <unistd.h>
# include <fcntl.h>

void	error(char *file);
void	free_arr(char **arr);
void	checker_fd(int *fd0, int *fd1, char **argv);
char	**search_path(char **env);
char	*full_cmd(char *cmd, char **path);

#endif
