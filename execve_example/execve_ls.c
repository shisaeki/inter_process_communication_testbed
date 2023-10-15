/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execve_ls.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:33:42 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/10/15 15:38:55 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int main()
{
    char        *argv[3];
    extern char **environ;

    argv[0] = strdup("ls");
    argv[1] = strdup("-l");
    argv[2] = NULL;

    execve("/bin/ls", argv, environ);
    return (0);
}