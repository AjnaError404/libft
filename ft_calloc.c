/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:44:08 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/17 22:10:48 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total;
	unsigned char	*tab;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	total = count * size;
	tab = malloc(total);
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, total);
	return ((void *)tab);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = ft_calloc(3, sizeof(int));
	int *ptr2 = calloc(3, sizeof(int));

	printf("mine :\n");
    printf("ptr[0] = %d\n", ptr[0]);
    printf("ptr[1] = %d\n", ptr[1]);
    printf("ptr[2] = %d\n", ptr[2]);
	
	printf("\nreal :\n");
	printf("ptr2[0] = %d\n", ptr[0]);
    printf("ptr2[1] = %d\n", ptr[1]);
    printf("ptr2[2] = %d\n", ptr[2]);

    free(ptr);
	free(ptr2);
    return 0;
}
*/