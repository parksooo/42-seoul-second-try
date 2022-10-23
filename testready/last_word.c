#include<unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(*str)
	{
		i++;
		str++;
	}
	return i;
}
void	lst_wrd(char *str)
{
	int len;
	len = ft_strlen(str) - 1;
	while ((str[len] >= 9 && str[len] <= 13)|| str[len] == ' ')
		len--;
	while (str[len] >= 33 && str[len] <= 126)
		len--;
	if(str[len] == ' ' || (str[len] >= 9 && str[len] <= 13))
	{
		while(str[len + 1])
		{
			write(1, &str[len + 1], 1);
			len++;
		}
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
	{
		lst_wrd(av[1]);
	}
	write(1, "\n", 1);
}
//ㄱ스페이스나 개행이나 뭐든 상관 안하고 문자열 마지막 단어만 출력하는 함수
