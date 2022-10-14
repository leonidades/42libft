/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <lgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:57:11 by lgil              #+#    #+#             */
/*   Updated: 2022/09/19 18:57:06 by lgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*punt;
	int		i;
	int		a;

	a = 0;
	i = count * size;
	punt = malloc(i);
	if (!punt)
		return (0);
	while (i > a)
	{
		((char *)punt)[a] = 0;
		a++;
	}
	return (punt);
}
