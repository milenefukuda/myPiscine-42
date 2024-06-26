/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combv.c                                    :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:22:11 by miler           #+#    #+#               */
/*   Updated: 2024/06/11 19:55:23 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    write_number(char v[])
{
    if(v[0] == '7' && v[1] == '8' && v[2] =='9')
    {
        write(1, v, 3);
        write(1, ".\n", 2);
    }
    else
        write(1, v, 5);
}

void    ft_print_combv(void)
{
    char    v[5];

    v[0] = '0';
    v[3] = ',';
    v[4] = ' ';
    while(v[0] <= '7')
    {
        v[1] = v[0] + 1;
        while(v[1] <= '8')
        {
            v[2] = v[1] + 1;
            while(v[2] <= '9')
            {
                write_number(v);
                v[2]++;
            }
            v[1]++;
        }
        v[0]++;
    }
}

int     main()
{
    ft_print_combv();
}
