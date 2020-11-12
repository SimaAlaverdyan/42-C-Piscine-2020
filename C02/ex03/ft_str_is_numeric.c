/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:46:36 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/03 15:56:14 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (str[i])
	{
		if (str[i] == '\0')
			break ;
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
