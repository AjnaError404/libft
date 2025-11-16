/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:14:43 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/16 18:15:52 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t siz)
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
	if (dest_len == siz)
		return (dest_len + src_len);

	while (i < siz)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	return (src_len + dest_len);
}

