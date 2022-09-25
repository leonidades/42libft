/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <lgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:05:38 by lgil              #+#    #+#             */
/*   Updated: 2022/09/25 19:41:44 by lgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destc;
	const char		*srcc;
	size_t			i;

	i = 0;
	destc = (unsigned char *)dest;
	srcc = (const char *)src;
	if (dest > src)
	{
		while (n--)
		{
			destc[n] = srcc[n];
		}
	}
	else if (dest < src)
	{
		while (i < n)
		{
			destc[i] = srcc[i];
			i++;
		}
	}
	return (dest);
}
