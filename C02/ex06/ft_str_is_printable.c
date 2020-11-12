/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:05:06 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/03 17:17:30 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while (str[i])
	{
		if (str[i] == '\0')
			break ;
		if (!(str[i] >= ' ' && str[i] <= 127))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
