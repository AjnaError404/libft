/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:11:04 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/17 20:14:30 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)(s1);
	str2 = (unsigned char *)(s2);
	i = 0;
	if (!n)
		return (0);
	while (str1[i] == str2[i] && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}

/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	*str = "zyxbcdefgh";
	char	*str2 = "abcdefgxyz";
	size_t	n = 0;

	printf("my ft = %d\n", ft_memcmp(str, str2, n));
	printf("real = %d\n", memcmp(str, str2, n));
	return (0);
}
*/
