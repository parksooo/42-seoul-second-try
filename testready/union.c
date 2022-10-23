#include<unistd.h>
int  new_char(char *str, char c, int len)
{
	int i;
	i = 0;

	while(i < len)
	{
		if(str[i] == c)
			return -1;
		i++;
	}
	return 0;
}
void	union_logic(char *s1, char *s2)
{
	int i;
	int j;
	i = 0;
	while(s1[i])
	{
		if(new_char(s1, s1[i], i) == 0)
			write(1, &s1[i], 1);
		i++;
	}
	j = 0;
	while(s2[j])
	{
		if(new_char(s2, s2[j], j) == 0 && new_char(s1, s2[j], i) == 0)

			write(1, &s2[j], 1);
		j++;
	}
}
int main(int ac, char **av)
{
	if(ac == 3)
	{
		union_logic(av[1], av[2]);
	}
	write(1, "\n", 1);
}
//두문자열의 합집합
