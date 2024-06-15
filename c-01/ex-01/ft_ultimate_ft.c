/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                    :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:13:11 by miler           #+#    #+#               */
/*   Updated: 2024/06/15 19:37:21 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int     main(void)
{
    int     n;
    int     *pn1, **pn2, ***pn3, ****pn4, *****pn5, ******pn6, *******pn7, ********pn8, *********pn9;

    pn9 = &pn8;
    pn8 = &pn7;
    pn7 = &pn6;
    pn6 = &pn5;
    pn5 = &pn4;
    pn4 = &pn3;
    pn3 = &pn2;
    pn2 = &pn1;
    pn1 = &n;

    n = 21;
    printf("\nThe valeu of ft_ultimate before was %d\n", n);
    ft_ultimate_ft(pn9);
    printf("\nThe value now is %d\n", n);
}
