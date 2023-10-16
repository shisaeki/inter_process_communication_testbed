/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:26:37 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/10/16 15:32:26 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int			fd;
	char		*cmd[2] = {"cat", NULL};
	extern char	**environ;

	fd = open("infile", O_RDONLY);
	dup2(fd, STDIN_FILENO);
	close(fd);
	execve("/bin/cat", cmd, environ);

	return (0);
}