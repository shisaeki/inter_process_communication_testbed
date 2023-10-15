/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fork.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:22:09 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/10/15 13:41:34 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t	pid;

	pid = fork();
	if (pid < 0)
	{
		printf("error fork");
		return (0);
	}
	else if (pid == 0)
		printf("Child Process ID: %d\n", getpid());
	else
		printf("Parent Process ID: %d\n", pid);
	return (0);
}