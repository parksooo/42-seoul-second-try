int ft_strlen(char *str)
{
	int len = 0;
	while(*str)
	{
		str++;
		len++;
	}
	return len;
}
char *ft_strdup(char *str)
{
	char *tab;
	int len;
	int i = 0;

	len = ft_strlen(str);
	tab = (char *)malloc(sizeof(char) * len + 1);
	if(!tab)
		return 0;
	while(str[i])
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return tab;
}
