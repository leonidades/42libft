/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_lstnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <lgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:15:10 by lgil              #+#    #+#             */
/*   Updated: 2022/10/11 17:47:08 by lgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*punt;

	punt = malloc(sizeof(t_list));
	if (!punt)
		return (0);
	punt->content = content;
	punt->next = 0;
	return (punt);
}
