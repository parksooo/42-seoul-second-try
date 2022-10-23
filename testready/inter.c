#include<unistd.h>
int	ft_strc(char c, char *s2, int n)
{
	int i = 0;
	while(i < n)
	{
		if(c == s2[i])
			return(-1);
		i++;
	}
	return (0);
}
void	inter_f(char *s1, char *s2)
{
	int i = 0;
	int j;
	while(s1[i])
	{
		if(ft_strc(s1[i], s1, i) == 0)
		{
			j = 0;
			while(s2[j])
			{
				if(s1[i] == s2[j])
				{
					write(1, &s1[i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
}
int main(int ac, char **av)
{
	if(ac == 3)
	{
		inter_f(av[1], av[2]);
	}
	write(1, "\n", 1);
}

// 두문자열의 교집합 출력
