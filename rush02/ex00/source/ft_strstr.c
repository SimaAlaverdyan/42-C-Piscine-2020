/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 11:38:43 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/08 19:45:39 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	char *res;

	res = (char *)malloc(2 * sizeof(char));
	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				j = 0;
				while (str[i] != '\n')
				{
					if (str[i] >= 'a' && str[i] <= 'z')
					{
						res[j] = str[i];
						j++;
					}
					i++;
				}
				//printf("%s\n", res);
				//j = i;
				//while (str[j] != '\n')
				return (res);
			}
			j++;
		}
		i++;
	}
	return (0);
}
