/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <lgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:58:01 by lgil              #+#    #+#             */
/*   Updated: 2022/10/06 17:37:17 by lgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cut(char const s1char, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s1char)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*punt;
	int		i;
	int		j;
	int		x;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] != '\0' && cut(s1[i], set))
		i++;
	while (j > i && cut(s1[j - 1], set))
		j--;
	punt = malloc(sizeof(char) * (j - i + 1));
	if (!punt)
		return (0);
	x = 0;
	while (j > i)
	{
		punt[x] = s1[i];
		i++;
		x++;
	}
	punt[x] = '\0';
	return (punt);
}
