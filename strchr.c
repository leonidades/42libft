char *ft_strchr(const char *s, int c)
{
    int i;
    char *punt;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            punt = s[i];
            return(punt);
        }
        i++;
    }
    if (s[i] == c)
    {
        punt = s[i];
        return(punt);    
    }
    return(0);
}