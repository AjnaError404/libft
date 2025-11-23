/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:44:08 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/23 22:20:37 by laaubry          ###   ########.fr       */
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
