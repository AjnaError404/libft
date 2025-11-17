/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:48:29 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/17 22:40:25 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*dest;

	len = ft_strlen(s1);
	i = 0;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main()
{
	const char str[] = "coucou";
	char *mine;
	char *real;

	mine = ft_strdup(str);
	real = strdup(str);
	printf("mine = %s\n", mine);
	printf("real = %s\n", real);
	return 0;
}
*/