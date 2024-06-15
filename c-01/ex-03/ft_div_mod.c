/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:37:24 by miler           #+#    #+#               */
/*   Updated: 2024/06/15 19:37:21 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    // any intenger divided by zero is undefined
    // if(b != 0)
    if(b)
    {
        *div = a /b;
        *mod = a % b;
    }
}

int     main(void)
{
    int     x;
    int     y;
    int     div;
    int     mod;

    x = 42;
    y = 24;

    ft_div_mod(x, y, &div, &mod);
    printf("\n%d / %d = %d with remainder %d\n\n", x, y, div, mod);
}