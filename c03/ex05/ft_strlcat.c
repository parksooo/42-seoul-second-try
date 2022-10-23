/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:34:06 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/08 21:06:24 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (src_len + size);
	i = 0;
	while (*(src + i) && i < size - dest_len - 1)
	{
		*(dest + dest_len + i) = *(src + i);
		i++;
	}
	*(dest + dest_len + i) = '\0';
	return (dest_len + src_len);
}
#include <stdio.h>
#include <string.h>
int main()
{
    printf("|==============C03==============|\n");
    printf("\n------ex05-------\n");
    char    f_dest[9] = "swimming";
    char    f_dest1[9] = "swimming";
    char    f_src[6] = "pool!";
    printf("\t복사여부 확인\n");
    printf("strlcat\t\t:  %lu\nft_strlcat\t:  %u\n", strlcat(f_dest, f_src, 5), ft_strlcat(f_dest1, f_src, 5));
    printf("원형함수\t: %s\n만든함수\t: %s\n", f_dest, f_dest1);
    char    f_dest2[16] = "swimming ";
    char    f_dest3[16] = "swimming ";
    printf("\n\t복사여부 확인\n");
    printf("strlcat\t\t:  %lu\nft_strlcat\t:  %u\n",
            strlcat(f_dest2, f_src, 15), ft_strlcat(f_dest3, f_src, 15));
    ;
    printf("원형함수\t: %s\n만든함수\t: %s\n", f_dest2, f_dest3);
    printf("===============END==============[seok]\n\n");
}
