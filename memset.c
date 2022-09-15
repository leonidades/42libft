void *ft_memset(void *str, int c, size_t n)
{
	size_t i;
	char* str_char;
	i = 0;

	while (str_char[i] != '\0' && n > i)
	{
		str_char[i] = c;
		i++; 
	}
	return(str);
}