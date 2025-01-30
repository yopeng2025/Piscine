/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopeng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:50:04 by yopeng            #+#    #+#             */
/*   Updated: 2025/01/22 09:05:15 by yopeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	space_counter;

	i = 0;
	space_counter = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (space_counter && str[i] >= 'a' && str[i] <= 'z')
				str[i] = (str[i] - 32);
			else if (!space_counter && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = (str[i] + 32);
			space_counter = 0;
		}
		else
			space_counter = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42Mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
*/
//space_counter=one means true 
//!space_counter means space_counter!=one, which means zero
//one-true zero-false 
