int	ft_atoi(char *str)
{
	int	c;
	int	i;
	int	result;

	c = 0;
	i = 1;
	result = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || (str[c] == ' '))
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			i *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		result = (str[c] - '0') + (result * 10);
		c++;
	}
	return (result * i);
}
