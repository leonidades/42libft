/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:41:11 by lgil              #+#    #+#             */
/*   Updated: 2022/09/18 17:07:59 by lgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	
	i = 0;
	j = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= j)
		return (ft_strlen(src)+ dstsize);
	while (i < (dstsize - j - 1) && src[i])
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (ft_strlen(src)+ j);
}

