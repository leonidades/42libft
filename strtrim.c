/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <lgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:58:01 by lgil              #+#    #+#             */
/*   Updated: 2022/09/19 17:58:02 by lgil             ###   ########.fr       */
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

	
	i = 0;
	j = ft_strlen(s);
	while (s1[i] != '\0' && cut(s[i], set))
		i++;
	while (s1[j] != '\0' && cut(s[j], set))
		j--;
	punt = malloc(sizeof(char) * (j + i + 1));
	while (j > i)
	{
		punt[i] = s1[i];
		i++;
	}
	punt[i] = '\0';
	return (punt);
}
