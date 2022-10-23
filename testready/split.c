#include<stdlib.h>
# define Y 1000
# define X 1000
char **ft_split(char *str)
{
	int i = 0;
	int i2 = 0;
	int i3;
	char **tab;
	tab = (char **)malooc(sizeof(char *) * Y);
	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while(str[i])
	{
		if(str[i] >= 33)
		{
			i3 = 0;
			tab[i2] = (char *)malloc(X * sizeof(char));
			while(str[i] >= 33)
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);
}
