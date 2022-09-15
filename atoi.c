int ft_atoi(const char *str)
{
    int i;
    int neg;
    int num;

    neg = 1;
    i = 0;
    num = 0;
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
    i++;
    if (str[i] == '+' && str[i] == '-')
    {
        if (str[i] == '-')
            neg = neg * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] -'0');
        i++;
    }
    return (num * neg);
}