/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                    :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:28:11 by miler           #+#    #+#               */
/*   Updated: 2024/06/17 18:50:26 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_rev_int_tab2(int *tab, int size)
{
    int     i;
    int     tmp;

    i=0;
    while(i < size / 2)
    {
        tmp = tab[(size - 1) - i];
        tab[(size - 1) - i] = tab[i];
        tab[i] = tmp;
        i++;
    }
}

int     main()
{
    int     v[5] = {2, 4, 6, 8, 10};

    ft_rev_int_tab2(v, 5);

    int     i;

    i = 0;
    while(i < 5)
    {
        printf("%d\n", v[i]);
        i++;
    }
    return(0);
}