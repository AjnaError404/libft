/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:42:21 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/17 15:36:47 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if (d > s && d < s + len)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
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