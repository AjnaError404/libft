/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:42:21 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/16 18:19:56 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	const unsigned char *s;
	unsigned char *d;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	
	if (d > s && d < s + len)
	{
		while (i < len - 1)
		{
			d[i] = s[i];
			i--;
		}
	}

	else
	{
		while (i < len)
		d[i] = s[i];
		i++;
	}
	return (d);
}
