/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                           :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:13:11 by miler           #+#    #+#               */
/*   Updated: 2024/06/15 19:37:21 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int     tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    // também poderia ter sido escrito apenas numa linha:
    // tmp = *a, *a = *b, *b = tmp;
}

int     main(void)
{
    int     x;
    int     y;
    x = 42;
    y = 24;
    printf("Before swap %d %d\n", x, y);
    ft_swap(&x, &y);
    printf("After swap %d %d\n", x, y);
}