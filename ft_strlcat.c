/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:14:43 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/17 22:13:00 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// not done yet

size_t	ft_strlcat(char *dest, const char *src, size_t siz)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;
	size_t	j;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (siz == 0)
		return (src_len);
	if (siz <= dest_len)
		return (src_len + siz);
	while (dest[j] && j < siz)
		j++;
	while (src[i] && (i + j < siz - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (j + i < siz)
		dest[j + i] = '\0';
	return (src_len + j);
}
