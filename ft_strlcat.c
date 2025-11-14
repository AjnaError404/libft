/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:14:43 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/11 15:40:10 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// to be continued 

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!dest)
		return (NULL);
	if (!src)
		return (NULL);

	while (dest[i])
		i++;
	while (i < size)
	{
		dest[i] = src[j];
		i++;
	}
}
