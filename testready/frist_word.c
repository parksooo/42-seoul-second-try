#include<unistd.h>
void	find_frist(char *str)
{
	int i = 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while(str[i] >= 33 && str[i] <= 126)
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int ac, char **av)
{
	if(ac == 2)
	{
		find_frist(av[1]);
	}
	write(1, "\n", 1);
}
// 문장의 첫번째 단어만 출력
