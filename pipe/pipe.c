/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:39:49 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/10/15 18:36:14 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
    char*			cmd1[3];
	char*			cmd2[3];
    extern char**	environ;
    int				fd[2];

	cmd1[0] = strdup("ls");
	cmd1[1] = strdup("-l");
	cmd1[2] = NULL;

	cmd2[0] = strdup("wc");
	cmd2[1] = strdup("-l");
	cmd2[2] = NULL;

    pipe(fd);
	if (fork() == 0)
	{
		dup2(fd[1], STDOUT_FILENO);
		close(fd[1]);
		close(fd[0]);
		execve("/bin/ls", cmd1, environ);
	}
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	close(fd[1]);
	execve("/usr/bin/wc", cmd2, environ);

	return (0);
}