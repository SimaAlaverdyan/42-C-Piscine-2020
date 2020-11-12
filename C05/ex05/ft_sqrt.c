/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:07:31 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/10 14:32:28 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int left;
	int	right;
	int middle;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (nb);
	left = 0;
	right = nb / 2;
	while (left <= right)
	{
		middle = (left + right) / 2;
		if ((long long)middle * middle < nb)
			left = middle + 1;
		else if ((long long)middle * middle > nb)
			right = middle - 1;
		else
			return (middle);
	}
	return (0);
}
