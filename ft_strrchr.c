/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:01:21 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/16 22:24:43 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*
int	main()
{
	char str[] = "petits seins grand coeur";
	char *result;

	result = ft_strrchr(str, 's');
	if (result)
	{
		printf("Chaine a partir du dernier 's' = %s\n", result);
	}
	else
		printf("Error\n");
	return 0;
}
*/