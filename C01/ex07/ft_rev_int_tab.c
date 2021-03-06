/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:12:28 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/02 15:36:42 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int cur;

	i = 0;
	while (i < size / 2)
	{
		cur = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = cur;
		i++;
	}
}
