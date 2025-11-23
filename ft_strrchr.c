/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:01:21 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/17 17:19:15 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)(c))
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main()
{
 	char *src = " ";
 	char *d1 = strrchr(src, 'a');
 	char *d2 = ft_strrchr(src, 'a');
 
 	printf("real ft : %c\n", *d1);
	printf("mine : %c\n", *d2);
	return 0;
}
*/