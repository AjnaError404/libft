/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 22:07:23 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/22 01:12:05 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	num_len(int n)
{
	int		len;
	long	nbr;

	len = 0;
	nbr = n;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nbr;
	int		i;

	len = num_len(n);
	str = malloc(len + 1);
	nbr = n;
	i = len - 1;
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
		nbr = -nbr;
	if (n == 0)
		str[0] = '0';
	while (nbr != 0)
	{
		str[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
