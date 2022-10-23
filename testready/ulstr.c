void	ulstrstr(char *str)
{
	if(*str >= 'a' && *str <= 'z')
		*str = *str - 32;
	else if(*str >= 'A' && *str <= 'Z')
		*str = *str +32;
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
	{
		ulstrstr(av[1]);
	}
	write(1, "\n", 1);
}
