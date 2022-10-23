int	ft_atoi(char *str)
{
	int sign = 1;
	int res = 0;
	while((*str >= 9 && *str<= 13) || *str == ' ')
		str++;
	if(*str == '+' || *str == '-')
	{
		if(*str == '-')
			sign = -sign;
	}
	str++;
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n", ft_atoi("     -123455"));
}*/
