#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*punt;
	int		i;

	i = 0;
	punt = malloc(sizeof(char) * ft_strlen(s1));
	if (!punt)
		return (0);
	while (*s1 != '\0')
	{
		punt[i] = *s1;
		i++;
		s1++;
	}
	punt[i] = *s1;
	return (punt);
}
