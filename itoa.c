/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <lgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:41:35 by lgil              #+#    #+#             */
/*   Updated: 2022/09/21 13:41:35 by lgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	getlength_num(int n)
{
	int		length_num;

	length_num = 0;
	while (n / 10)
	{
		length_num++;
		n = n / 10;
	}
	return (length_num);
}

int	getmultipli(int length_num)
{
	int		multipli;

	multipli = 1;
	while (length_num - 1)
	{
		multipli = multipli * 10;
		length_num--;
	}
	return (multipli);
}

void	fill_char(char *cnum, int length_num, int multipli, int n)
{
	int	isnegative;

	isnegative = 0;
	if (n < 0)
		isnegative = 1;
	while (length_num)
	{
		cnum[length_num + i] = (n % multipli) + 0;
		length_num--;
		multipli = multipli / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*cnum;
	int		length_num;
	int		isnegative;
	int		multipli;

	isnegative = 0;
	length_num = getlength_num(n);
	multipli = getmultipli(length_num);
	if (n < 0)
		isnegative = 1;
	cnum = (char *)malloc(sizeof(char) * (length_num + isnegative));
	if (!cnum)
		return (0);
	if (isnegative)
	{
		cnum[0] = '-';
	}
	fill_char(cnum, length_num, multipli, n);
	return (cnum);
}
