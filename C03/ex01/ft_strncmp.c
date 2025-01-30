/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:20:51 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/25 14:13:09 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
//#include<stdio.h>
//#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("test", "test", 3));
	printf("%d\n", strncmp("test", "test", 3));
	printf("%d\n", ft_strncmp("tast", "test", 3));
        printf("%d\n", strncmp("tast", "test", 3));
}
*/
