/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:09:44 by salaverd          #+#    #+#             */
/*   Updated: 2020/10/29 18:14:42 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_commas(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_check_print(int x[], int n)
{
	int i;
	int yes;

	i = 0;
	yes = 1;
	while (i < n - 1)
	{
		if (!(x[i] < x[i + 1]))
		{
			yes = 0;
		}
		i++;
	}
	if (yes == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(x[i]);
			i++;
		}
		if (x[0] != 57 - n + 1)
			ft_commas();
	}
}

void	create_while(int x[], int k, int n)
{
	if (k == n - 1)
	{
		x[k] = 48;
		while (x[k] < 58)
		{
			ft_check_print(x, n);
			x[k]++;
		}
	}
	else
	{
		x[k] = 48;
		while (x[k] < 58)
		{
			create_while(x, k + 1, n);
			x[k]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int x[n];

	create_while(x, 0, n);
}
