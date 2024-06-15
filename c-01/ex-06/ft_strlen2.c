/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen2.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:50:11 by miler           #+#    #+#               */
/*   Updated: 2024/06/15 18:10:26 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int     ft_strlen2(char *str)
{
    int     size;

    size = 0;
    while(str[size] != '\0')
        size++;
    return (size);
}

int     main()
{
    char    *s;

    s = "Hello world!";
    printf("%d\n", ft_strlen2(s));
    return (0);
}