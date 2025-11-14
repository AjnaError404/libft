/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:42:21 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/13 17:20:14 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// to be continued
void	*memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	temp;

	i = 0;
	temp = 0;
	while (i < n)
	{
		*(unsigned char *)(temp + i) = src;
		*(unsigned char *)(dest + i) = temp;
		i++;
	}
}
