/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execve.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:55:08 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/10/15 14:00:51 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main()
{
    char    *path;
    char    *argv[] = {"./hello", NULL};
    char    *env[] = {NULL};

    path = "./hello";
    execve(path, argv, env);

    printf("failed to execve");
    return (0);
}