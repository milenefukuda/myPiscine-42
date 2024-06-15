/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_rec.c                                     :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:14:11 by miler           #+#    #+#               */
/*   Updated: 2024/06/15 18:50:21 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int     ft_strlen_rec(char *str)
{
    if(!*str)
       return 0;
    return ft_strlen_rec(str + 1) + 1;
}

int     main()
{
    char    *s;

    s = "Hello world!";
    printf("%d\n", ft_strlen_rec(s));
}