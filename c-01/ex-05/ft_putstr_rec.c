/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_rec.c                                     :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 16:57:44 by miler           #+#    #+#               */
/*   Updated: 2024/06/15 19:37:21 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void    ft_putstr_rec(char *str)
{
    write(1, str, 1);
    if(*str)
            ft_putstr_rec(str + 1);
            
    // to write the string rec in reverse the write function comes after
    // write(1, str, 1)
}

int     main()
{
    char    *s;
    s = "hello world!\n";
    ft_putstr_rec(s);
}