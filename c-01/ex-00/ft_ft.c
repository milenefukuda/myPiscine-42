/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                             :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:18:11 by miler           #+#    #+#               */
/*   Updated: 2024/06/12 11:55:23 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_ft(int *p)
{
    *p = 42;
}

int     main()
{
    int     n;
    n = 142;
    printf("Before >> %d\n", n);
    ft_ft(&n);
    printf("After >> %d\n", n);
}