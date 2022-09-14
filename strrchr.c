 char *ft_strrchr(const char *s, int c)
 {
	int i;
	int last;
	char *punt;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = i;
		i++;
	}
	if (s[i] == c)
		last = i;
	if (!last)
	{
		punt = s[last];
		return(punt);
	}
	return(0);
}