/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:18:11 by miler           #+#    #+#               */
/*   Updated: 2024/06/12 17:55:23 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putnbr(int nb)
{
    long    nbl;
    char    c[10];
    short   i;

    nbl = nb;
    i = 0;
    if(0 == nb)
    {
        write(1, "0", 1);
        return;
    }
    if(nbl < 0)
    {
        nbl *= -1;
        write(1, "-", 1);
    }
    while(nbl)
    {
        c[i++] = (nbl % 10) + 48;
        nbl /= 10;
    }
    while(i > 0)
    {
        write(1, &c[--i], 1);
    }
}

int     main(void)
{
    ft_putnbr(-42);
    write(1, "\n", 1);
    ft_putnbr(42);
    write(1, "\n", 1);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    ft_putnbr(0);
}