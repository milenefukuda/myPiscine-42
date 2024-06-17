/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                    :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:28:11 by miler           #+#    #+#               */
/*   Updated: 2024/06/17 18:50:26 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void    swap(int *a, int *b);

void    ft_rev_int_tab(int *tab, int size)
{
    int     swaps;
    int     i;

    i = 0;
    swaps = size / 2;
    while(swaps--)
            swap(&(*(tab + i++)), (&(tab [size --])));
}

int     main(void)
{
    int     v[10];

    for(int i=0; i < 10; ++i)
            v[i]= rand()%101;
    printf("BEFORE\n");
    for(int i=0; i < 10; i++)
            printf("%d ", v[i]);
    printf("\n");

    ft_rev_int_tab(v, sizeof(v)/sizeof(v[0]));

    printf("AFTER\n");
    for(int i=0; i < 10; i++)
            printf("%d ", v[i]);
    printf("\n\n");
}

void    swap(int *a, int *b)
{
    int     tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
