#include<unistd.h>
void rotone1(char *str)
{
	int i = 0;
	while(str[i])
	{
		if (str[i] == 'z' || str[i] == 'Z')
			str[i] = str[i] - 25;
		else if((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
			str[i] = str[i] + 1;
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
		rotone1(av[1]);
	}
	write(1, "\n", 1);
}
// z, Z -> a. A 바꿔 출력
// a~y 는 아스키 코드 하나 올려서 출력
