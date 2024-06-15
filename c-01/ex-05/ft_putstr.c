/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 16:18:44 by miler           #+#    #+#               */
/*   Updated: 2024/06/15 17:49:21 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void    ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str, 1);
        str++;
    }
    // fancy way (2 lines only)
    // while(*str)
    // write(STDOUT_FILENO, str++, 1);
}

int     main()
{
    char    *s;
    s = "hello world!\n";
    ft_putstr(s);
}