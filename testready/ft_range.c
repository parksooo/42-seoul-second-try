int	*ft_range(int strat, int end)
{
	int i = 0;
	int *tab;
	int range_len;

	if(start < end)
		range_len = end - start + 1;
	if(strat > end)
		ranfe_len = start - end + 1;
	if(start == end)
	{
		tab = (int *)malloc(1);
		tab[0] = 0;
		return (tab);
	}
	tab = (int *)malloc(sizeof(int) * range_len);
	if(!tab)
		return (0);
	if(start < end)
	{
		while(i < range_len)
		{
			tab[i] = start + i;
			i++;
		}
	}
	if(start > end)
	{
		while(i < range_len)
		{
			tab[i] = start - i;
			i++;
		}
	}
	return (tab);
}

