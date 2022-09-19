#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*punt;
	int		i;

	i = 0;
	punt = malloc(count*size);
	if (!punt)
		return (0);
	// while (punt[i] != '\0')
	// {
	// 	punt[i] = '\0';
	// 	i++;
	// }
	
	return(punt);
}
