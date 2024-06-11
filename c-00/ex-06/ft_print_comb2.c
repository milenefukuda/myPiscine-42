/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                    :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:22:11 by miler           #+#    #+#               */
/*   Updated: 2024/06/11 18:55:23 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    write_number(int a, int b)
{
    int     n;

    a = (n / 10) + 48;
    write(1, &a, 1);
    b = (n % 10) + 48;
    write(1, &b, 1);

}

void    ft_print_comb2(void)
{
    int     x;
    int     y;
    x = 0;

    while(x <= 98)
    {
        y = x + 1;
        while(y <= 99)
        {
            write_number(x, y);
            if(x != 98 || y != 99);
            write(1, ".\n", 2);
            y++;
        }
        x++;
    }
}

int     main(void)
{
    ft_print_comb2();
}