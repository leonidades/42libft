/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <lgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:57:44 by lgil              #+#    #+#             */
/*   Updated: 2022/09/19 17:57:45 by lgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*punt;
	int		i;

	i = 0;
	punt = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!punt)
		return (0);
	while (*s1 != '\0')
	{
		punt[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		punt[i] = *s2;
		s2++;
		i++;
	}
	punt[i] = '\0';
	return (punt);
}
