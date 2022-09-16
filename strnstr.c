char *ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t i;
	size_t a;
	char * punt;

	i = 0;
	if (lit == 0)
		return(0);
	while (big[i] != '\0' && len > i)
	{
		a = 0;
		while (lit[a] && lit[a] == big[i + a] && len < i + a && big[i + a])
		{
			if (lit[a + 1] == '\0')
			{
				punt = big[i];
				return (punt);
			}
			a++;
		}
		i++;
	}
	return(0);
}