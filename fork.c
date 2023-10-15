/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fork.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:22:09 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/10/15 13:24:32 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t	pid;

	pid = fork();
	if (pid == 0)
		printf("Child Process\n");
	else
		printf("Parent Process\n");
	return (0);
}