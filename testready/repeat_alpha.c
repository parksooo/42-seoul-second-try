#include<unistd.h>
int get_repeat(char c)
{
	if(c >= 'A' && c <= 'Z')
		return (c - 64);
	else if(c >= 'a' && c <= 'z')
		return (c - 96);
	else
		return (1);
}
void	repeat_alpha(char *str)
{
	int repeat;
	int i = 0;
	while(str[i])
	{
		repeat = get_repeat(str[i]);
		while(repeat > 0)
		{
			write(1, &str[i], 1);
			repeat--;
		}
		i++;
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
	{
		repeat_alpha(av[1]);
	}
	write(1, "\n", 1);
}
