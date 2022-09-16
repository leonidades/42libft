int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    char* punt1;
    char* punt2;

    punt1 = s1;
    punt2 = s2;
    while (n > i && punt2[i] != '\0' && punt1[i] != '\0')
    {
        if (punt1[i] != punt2[i])
            return(punt1[i] - punt2[i]);
    }
    return(0);
}