#include<stdlib.h>
char *ft_itoa(int nbr)
{
	long long n;
	long long len = 0;
	long long tmp;
	char *res;

	n = nbr;
	tmp = n;

	if(n < 0)
	{
		len++;
		n = -n;
	}
	while(n > 0)
	{
		len++;
		n /= 10;
	}
	if(tmp == 0)
	{
		res = (char *)malloc(sizeof(char) * 2);
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	res = (char *)malloc(sizeof(char) * len + 1);
	res[len--] = '\0';
	if(tmp < 0)
	{
		res[0] = '-';
		tmp = -tmp;
	}
	while(tmp > 0)
	{
		res[len] = tmp % 10 + '0';
		len--;
		tmp /= 10;
	}
	return(res);
}
#include<stdio.h>
int main()
{
	printf("%s\n", ft_itoa(0));
}

