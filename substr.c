char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substring;
    unsigned int i;
    int a;
    //No se si esto esta bien
    substring = malloc(sizeof(char) * (len + 1));

    //este tendria que ir 
    //str = (char*)malloc(sizeof(*s) * (len + 1));
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