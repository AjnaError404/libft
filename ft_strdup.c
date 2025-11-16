/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:48:29 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/16 22:47:36 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*s2;
	len = ft_strlen(s1);
	i = 0;

	s2 = malloc(sizeof(len));
	if (!s2 || !len)
		return (NULL);
	while(s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

#include <stdio.h>
int	main()
{
	const char str[] = "coucou";
	char *result;

	result = ft_strdup(str);
	if (result)
	{
		printf("Resultat = %s\n", result);
	}
	else
		printf("Error\n");
	return 0;
}
