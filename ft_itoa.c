/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <lgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:41:35 by lgil              #+#    #+#             */
/*   Updated: 2022/09/27 17:31:26 by lgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	getlength_num(int n)
{
	int		length_num;

	length_num = 0;
	if (!n)
		length_num = 1;
	while (n)
	{
		length_num++;
		n = n / 10;
	}
	return (length_num);
}

void	fill_char(char *cnum, int length_num, int n, int isnegative)
{
	while (length_num)
	{
		cnum[length_num + isnegative - 1] = (n % 10) + '0';
		length_num--;
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*cnum;
	int		length_num;
	int		isnegative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	isnegative = 0;
	length_num = getlength_num(n);
	if (n < 0)
		isnegative = 1;
	cnum = (char *)malloc(sizeof(char) * (length_num + isnegative + 1));
	if (!cnum)
		return (0);
	if (isnegative)
	{
		cnum[0] = '-';
		n = n * -1;
	}
	fill_char(cnum, length_num, n, isnegative);
	cnum[length_num + isnegative] = '\0';
	return (cnum);
}
