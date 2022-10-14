/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <lgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:57:40 by lgil              #+#    #+#             */
/*   Updated: 2022/09/19 17:58:39 by lgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*punt;
	int		i;

	i = 0;
	punt = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!punt)
		return (0);
	while (*s1 != '\0')
	{
		punt[i] = (char)*s1;
		i++;
		s1++;
	}
	punt[i] = *s1;
	return (punt);
}
