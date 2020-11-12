/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 10:34:21 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/08 15:41:53 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	dest[i] = ' ';
	i++;
	dest[i] = src;
	dest[++i] = '\0';
	return (dest);
}
