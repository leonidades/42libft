#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;
	int				a;

	substring = (char *)malloc(sizeof(*s) * (len + 1));
	if (!substring)
		return (0);
	i = start;
	a = 0;
	while (s[i] != '\0' && len > (size_t)i)
	{
		substring[a] = s[i];
		a++;
		i++;
	}
	substring[a] = '\0';
	return (substring);
}
