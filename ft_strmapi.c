/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <lgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:13:39 by lgil              #+#    #+#             */
/*   Updated: 2022/09/21 14:13:39 by lgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*punt;
	int		i;

	i = 0;
	punt = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!punt)
		return (0);
	while (*s)
	{
		punt[i] = f(i, *s);
		s++;
		i++;
	}
	punt[i] = '\0';
	return (punt);
}
