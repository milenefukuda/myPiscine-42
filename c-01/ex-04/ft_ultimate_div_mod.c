/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                               :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:49:24 by miler           #+#    #+#               */
/*   Updated: 2024/06/15 19:37:21 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int     tmp;

    if(*b)
    {
        tmp = *a;
        *a = *a / *b;
        *b = tmp % *b;
    }
}

int     main(void)
{
    int     a;
    int     b;

    for(int i=0; i<10; i++)
    {
        a = rand()%101;
        b = rand()%10 + 1;
        printf("a=%d b=%d\n", a, b);
        printf("quotient=%d module=%d\n", a/b, a%b);
        ft_ultimate_div_mod(&a, &b);
        printf("-----from my func-----\n");
        printf("quotient=%d module=%d\n\n", a, b);
    }

}