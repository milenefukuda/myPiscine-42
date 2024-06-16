/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_as_param.c                                 :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: miler <marvin@42.fr>                     +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 19:31:11 by miler           #+#    #+#               */
/*   Updated: 2024/06/15 19:42:26 by miler          ###   ########.fr         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void    size(int *arr)
{
    printf("Address\n%p\n", arr);
    printf("Pointer\n%p\n", &arr);
    printf("Size from function %lu\n\n", sizeof(&arr));
}

int     main()
{
    int     v[10];

    for(int i = 0; i < 10; i++)v[i]=i;

    printf("Address\n%p\n", &v);
    printf("Size from main %lu\n\n", sizeof(v));
    size(v);
}