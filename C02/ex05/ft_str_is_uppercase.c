/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:57:12 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/03 17:02:51 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (str[i])
	{
		if (str[i] == '\0')
			break ;
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
