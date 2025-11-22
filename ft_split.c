/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laaubry <laaubry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:59:32 by laaubry           #+#    #+#             */
/*   Updated: 2025/11/22 01:11:46 by laaubry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i - 1] == c && s[i] != c))
			count++;
		i++;
	}
	return (count);
}

static void	free_all(char **tab, int nb_words)
{
	int	i;

	i = 0;
	while (i < nb_words)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static char	*create_word(const char *s, int len)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		current_word;
	int		len;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	i = -1;
	current_word = 0;
	while (s[++i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			len = word_len(&s[i], c);
			tab[current_word] = create_word(&s[i], len);
			if (!tab[current_word++])
				return (free_all(tab, current_word), NULL);
		}
	}
	tab[current_word] = NULL;
	return (tab);
}
