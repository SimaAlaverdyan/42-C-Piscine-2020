/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:32:58 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/02 16:41:08 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int cur;

	i = 0;
	while (i++ < size)
	{
		j = 0;
		while (++j < size)
		{
			if (tab[j - 1] > tab[j])
			{
				cur = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = cur;
			}
		}
	}
}
