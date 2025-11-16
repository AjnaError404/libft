/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:44:08 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/16 18:15:15 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t size, size_t nmemb)
{
	void	*new_tab;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size > size * size || size > nmemb * nmemb)
	{
		new_tab = malloc(0);
		return (new_tab);
	}
	new_tab = malloc(size * nmemb);
	if (!new_tab)
		return (NULL);
	while (i < size * nmemb)
	{
		*(unsigned char *)(new_tab + i) = 0;
		i++;
	}
	return ((void *)new_tab);
}