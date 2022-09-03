/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 21:11:20 by pbomber           #+#    #+#             */
/*   Updated: 2022/03/18 21:13:10 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	exe_cmd1(int *pipe_fd, char **argv, char **env, int fd0)
{
	char	**cmd;
	char	**path;
	char	*line;

	dup2(fd0, 0);
	dup2(pipe_fd[1], 1);
	cmd = ft_split(argv[2], ' ');
	path = search_path(env);
	line = full_cmd(cmd[0], path);
	close(fd0);
	close(pipe_fd[0]);
	close(pipe_fd[1]);
	execve(line, cmd, env);
}

void	exe_cmd2(int *pipe_fd, char **argv, char **env, int fd1)
{
	char	**cmd;
	char	**path;
	char	*line;

	dup2(fd1, 1);
	dup2(pipe_fd[0], 0);
	cmd = ft_split(argv[3], ' ');
	path = search_path(env);
	line = full_cmd(cmd[0], path);
	close(fd1);
	close(pipe_fd[0]);
	close(pipe_fd[1]);
	execve(line, cmd, env);
}

void	pipex(char **argv, char **env)
{
	int		fd0;
	int		fd1;
	pid_t	pid;
	int		pipe_fd[2];

	checker_fd(&fd0, &fd1, argv);
	if (pipe(pipe_fd) == -1)
		error(NULL);
	pid = fork();
	if (pid == -1)
		error(NULL);
	if (pid == 0)
		exe_cmd1(pipe_fd, argv, env, fd0);
	pid = fork();
	if (pid == -1)
		error(NULL);
	if (pid == 0)
		exe_cmd2(pipe_fd, argv, env, fd1);
	close(fd0);
	close(fd1);
	close(pipe_fd[0]);
	close(pipe_fd[1]);
	wait(0);
	wait(0);
}

int	main(int argc, char **argv, char **env)
{
	if (argc != 5)
	{
		write(2, "Error\n", 6);
		exit(EXIT_SUCCESS);
	}
	pipex(argv, env);
	return (0);
}
