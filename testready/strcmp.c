int ft_strcmp(char *s1, char *s2)
{
	while(*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
#include<stdio.h>
int main()
{
	char arr1[] = "12345";
	char arr2[] = "12348";
	printf("%d\n", ft_strcmp(arr1, arr2));
}
