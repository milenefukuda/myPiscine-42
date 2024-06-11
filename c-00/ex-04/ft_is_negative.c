/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                    :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:22:11 by miler           #+#    #+#               */
/*   Updated: 2024/06/11 18:55:23 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_is_negative(int n)
{
    if(n < 0)
    {
        write(1, "N", 1);
    }
    else
        write(1, "P", 1);
}

/*
int     main(void)
{
    int     n;
    n = -42;
    int     m;
    m = 42;

    ft_is_negative(n);
    ft_is_negative(m);
    ft_is_negative(-42);
    ft_is_negative(42);
    ft_is_negative('\0');
    write(1, "\n", 1);
}
*/