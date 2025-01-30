/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:46:39 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/25 12:19:47 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	int				len;

	j = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[j] != '\0' && j < (size - 1))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (len);
}
/*
int	main(void)
{
	char	src[] = "hello hi";
	char	dest[15];
	printf("%d, %s", ft_strlcpy(dest, src, 11), dest);
}
*/
