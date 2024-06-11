/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 21:22:11 by miler           #+#    #+#               */
/*   Updated: 2024/06/11 18:55:23 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char    c;
    c = 'z';

    while(c >= 'a')
    {
        write(1, &c, 1);
        c--;
    }
}

/*
int     main(void)
{
    ft_print_reverse_alphabet();
    write(1, "\n", 2);
}
*/