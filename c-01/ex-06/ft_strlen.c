/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:08:14 by miler           #+#    #+#               */
/*   Updated: 2024/06/15 16:50:21 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int     size;

    size = 0;
    while(*str)
    {
        str++;
        size++;
    }
    return(size);
}

int     main()
{
    char    string[] = "hello world";
    int     length = ft_strlen(string);
    ft_strlen(string);
    printf("%d\n", length);
}

