/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:28:11 by miler           #+#    #+#               */
/*   Updated: 2024/07/02 20:50:26 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char       *ft_strcpy(char *dest, char *src)
{
    int     i;

    i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int     main()
{
    char    dest[4];
    char    src[] = "hello world";

    ft_strcpy(dest, src);

    printf("SRC: %s\n", src);
    printf("DEST: %s\n", dest);

    return(0);
}