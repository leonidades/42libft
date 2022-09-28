/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgil <lgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:16:10 by lgil              #+#    #+#             */
/*   Updated: 2022/09/27 18:42:29 by lgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*makestring(char const *s, char c, int whatstrig)
{
	int		i;
	int		j;
	char	*substr;

	j = 0;
	i = 0;
	while (s[i] != '\0' && j != whatstrig)
	{
		if (s[i] == c)
			j++;
		i++;
	}
	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		j++;
		i++;
	}
	substr = malloc(sizeof(char) * (j + 1));
	if (!substr)
		return (0);
	substr[j] = '\0';
	while (j)
		substr[--j] = s[--i];
	return(substr);
}
/*int	cont_char_of_strings(char const *s, char c)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return(i);
		i++;
	}
	return(i);
}
*/
int	cont_strings(char const *s, char c)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			x++;
		i++;
	}
	if (s[i] == '\0')
		x++;
	return (x);
}

char	**ft_split(char const *s, char c)
{
	char	**punt;
	int		cant_strings;
	int		i;

	cant_strings = cont_strings(s, c);
	i = 0;
	punt = malloc(sizeof(char *) * cant_strings);
	if (!punt)
		return (0);
	while (cant_strings > i)
	{
		punt[i] = makestring(s, c, i);
		i++;
	}
	return (punt);
}

 int  main(void)
{
   char    *s = "hola que tal";
   char    c = ' ';
   int  count;
   char    **tab = ft_split(s, c);
   int  i;
 
   i = 0;
   count = ft_size_substring(s, c);
   printf("s[0]: %c\n", s[0]);
   printf("COUNT en main: %zu\n", count);
   while (i < count)
   {
       printf("%s\n", tab[i]);
       i++;
   }
}