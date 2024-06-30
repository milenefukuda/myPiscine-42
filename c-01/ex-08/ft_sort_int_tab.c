/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                   :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:28:11 by miler           #+#    #+#               */
/*   Updated: 2024/06/17 20:50:26 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int     i;
    int     tmp;

    i = 0;
    while(i < size - 1)
    {
        if(tab[i + 1] < tab[i])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}

int     main()
{
    int     tab[4] = {7, 1, 8, 4};
    ft_sort_int_tab(tab, 4);

    int     i;
    i = 0;
    while(i < 4)
    {
        printf("%d\n", tab[i]);
        i++;
    }
    return (0);
}