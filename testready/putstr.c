#include<unistd.h>
void	ft_putstr(char *str)
{
	while(*str)
	{
		wirte(1, str, 1);
		str++;
	}
}
