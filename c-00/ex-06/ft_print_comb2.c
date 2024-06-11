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

void    write_number(short n)
{
    char    c;

    if(n <= 10)
    {
        c = n + 48;
        write(1, "0", 1);
        write(1, &c, 1);
        return;
    }
    c = (n / 10) + 48;
    write(1, &c, 1);
    c = (n % 10) + 48;
    write(1, &c, 1);

}

void    ft_print_comb2(void)
{
    short   v[2];

    while(v[0] <= 99)
    {
        v[1] = v[0] + 1;
        while(v[1] <= 100)
        {
            write_number(v[0]);
            write(1, " ", 1);
            write_number(v[1]);
            if(v[0] == 98 && v[1] == 99)
                write(1, ".\n", 2);
            else
                write(1, " ", 2);
            v[1]++;
        }
        v[0]++;
    }
}

int     main(void)
{
    ft_print_comb2();
}