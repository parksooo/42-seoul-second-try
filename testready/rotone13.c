#include<unistd.h>

void	rotone13(char *str)
{
	int i = 0;
	while(str[i])
	{
		if((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
			str[i] = str[i] + 13;
		else if((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
			str[i] = str[i] - 13;
		i++;
	}
	i = 0;
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
		rotone13(av[1]);
	}
	write(1, "\n", 1);
}
//a~m <-> n ~ z 
