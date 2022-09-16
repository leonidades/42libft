void *ft_memchr(const void *s,int c, size_t n)
{
    size_t	i;
    char* punt;

    punt = s;
    i = 0;
    while (punt[i] != '\0' && n > i)
    {
        if (punt[i] == c)
        {
            return(punt[i]);
        }
        
        i++;
    }
    return(0);
}