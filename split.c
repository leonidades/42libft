/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <lgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:16:10 by lgil              #+#    #+#             */
/*   Updated: 2022/09/27 18:42:29 by lgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cont_char_of_strings(char const *s, char c)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return(i);
		i++;
	}
	return(i);
}

int	cont_strings(char const *s, char c)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			x++;
		i++;
	}
	return (x);
}

char	**ft_split(char const *s, char c)
{
	char	**punt;
	int		cant_strings;
	int		i;

	cant_strings = cont_strings(s, c);
	i = cant_strings;
	*punt = malloc(sizeof(char *) * cont_strings(s, c));
	while (i)
	{
		
		i--;
	}
	
}
