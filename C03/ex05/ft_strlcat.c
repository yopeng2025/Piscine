/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:34:57 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/28 19:57:57 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	j;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	j = 0;
	if (size == 0)
	{
		return (slen);
	}
	while (src[j] != '\0' && dlen < (size - 1))
	{
		dest[dlen + j] = src[j];
		j++;
	}
	dest[dlen + j] = '\0';
	if (size < dlen)
		return (slen + size);
	else
		return (slen + dlen);
}
/*
#include<unistd.h>
#include<stdio.h>
#include<bsd/string.h>
int	main(void)
{
	char	dest[6] = "123";
	char	src[] = "4";
	
	printf("%u\n", ft_strlcat(dest, src, 6));
	printf("%s\n", dest);
	printf("%lu\n", strlcat(dest, src, 6));
	return 0;
}*/
