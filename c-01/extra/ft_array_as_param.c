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

//same thing as 
void    ft_printSize(int* arrParam) // void      ft_printSize(int arrParam[5])
{
    printf("Size of array in function %11lu bytes\n", sizeof(arrParam));

}

int     main(int argc, char* argv[])
{
    int    v[5] = {1, 2, 3, 4, 5};

    printf("Size of array in main %11lu bytes\n", sizeof(v)); 
    // we get 20 bytes bc the array has 5 integers and each integer takes 4 bytes (5x4=20)

    ft_printSize(v); // arr -> int* 
    // we get 8 bc one integer pointer is always 8 bytes
    return 0;
}