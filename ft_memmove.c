/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:42:21 by laaubry           #+#    #+#             */
/*   Updated: 2026/04/27 20:55:33 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*src_pt;
	unsigned char	*dest_pt;
	
	i = 0;
	src_pt = (unsigned char *)src;
	dest_pt = (unsigned char *)dest;
	if (src_pt > dest_pt)
	{
		while (i < n)
		{
			dest_pt[i] = src_pt[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i != 0)
		{
			i--;
			dest_pt[i] = src_pt[i];
		}

	}
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char *src = "this is a good nyancat !\r\n";
 	char dst1[0xF0];
 	char dst2[0xF0];
 	int size = strlen(src);
 
 	memmove(dst1, src, size);
 	ft_memmove(dst2, src, size);
 	if (!memcmp(dst1, dst2, size))
 		printf("success\n");
 	else
		printf("failed\n");
	return 0;
}
*/