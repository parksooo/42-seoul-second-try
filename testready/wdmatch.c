#include<unistd.h>
int	ft_strlen(char *str)
{
	int i = 0;
	while(*str)
	{
		str++;
		i++;
	}
	return i;
}
void	wdmatch(char *s1, char *s2)
{
	int len;
	int i = 0;
	len = ft_strlen(s1);
	while (*s2)
	{
		if(s1[i] == *s2)
			i++;
		s2++;
	}
	if (i == len)
	{
		while(*s1)
		{
			write(1, s1, 1);
			s1++;
		}
	}
}
int main(int ac, char **av)
{
	if(ac == 3)
	{
		wdmatch(av[1], av[2]);
	}
	write(1, "\n", 1);
}
// 첫 번째 배열 요소가 순서대로 두번째 배열에 하나하나 다 존재 하면 출 룍
