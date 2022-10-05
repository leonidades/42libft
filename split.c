/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <lgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:16:10 by lgil              #+#    #+#             */
/*   Updated: 2022/10/05 18:21:45 by lgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_next_word_position(char const *s, char c, int whatstrig)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (s[i] && j != whatstrig)
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			j++;
		}
		if (j != whatstrig)
			i++;
	}
	return (i);
}

char	*makestring(char const *s, char c, int whatstrig)
{
	int		i;
	int		j;
	char	*substr;

	i = find_next_word_position(s, c, whatstrig);
	j = 0;
	while (s[i] != c && s[i])
	{
		j++;
		i++;
	}
	substr = malloc(sizeof(char) * (j + 1));
	if (!substr)
		return (0);
	substr[j] = '\0';
	while (j)
		substr[--j] = s[--i];
	return (substr);
}

int	cont_strings(char const *s, char c)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			x++;
		}
		i++;
	}
	if ((s[i] == '\0' && x > 0) || (x == 0 && i > 0))
		x++;
	return (x);
}

char	**ft_split(char const *s, char c)
{
	char	**punt;
	int		cant_strings;
	int		i;
	char	*str;
	char	*set;

	set = malloc(sizeof(char) * 2);
	set[0] = c;
	set[1] = '\0';
	str = ft_strtrim(s, set);
	free(set);
	cant_strings = cont_strings(str, c);
	i = 0;
	punt = malloc(sizeof(char *) * (cant_strings + 1));
	if (!punt)
		return (0);
	while (cant_strings > i)
	{
		punt[i] = makestring(str, c, i);
		i++;
	}
	free(str);
	punt[i] = 0;
	return (punt);
}
