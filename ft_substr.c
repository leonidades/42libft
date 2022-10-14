/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <lgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:58:04 by lgil              #+#    #+#             */
/*   Updated: 2022/10/13 19:18:38 by lgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;
	size_t			a;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (0);
	i = start;
	a = 0;
	while (s[i] != '\0' && len > a)
	{
		substring[a] = s[i];
		a++;
		i++;
	}
	substring[a] = '\0';
	return (substring);
}
