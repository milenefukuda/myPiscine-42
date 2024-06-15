/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xor_swap.c                                       :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:37:24 by miler           #+#    #+#               */
/*   Updated: 2024/06/15 14:35:21 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_xor_swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
}

int     main(void)
{
    int x;
    int y;
    x = 42;
    y = 24;
    printf("\nBefore swap %d %d", x, y);
    ft_xor_swap(&x, &y);
    printf("\nAfter swap %d %d\n", x, y);
}