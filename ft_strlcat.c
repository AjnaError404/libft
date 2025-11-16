/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:14:43 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/16 20:55:25 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// not done yet

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t src_len;
	size_t dest_len;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (!dest)
		return (0);
	if (!src)
		return (0);
	if (dest_len <= dest_size)
		dest_len = dest_size;
	if (dest_len == dest_size)
		return (dest_len + src_len);

	while (src[i] && (dest + i) < (dest_size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (src_len + dest_len);
}