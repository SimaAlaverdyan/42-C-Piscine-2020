/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:21:06 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/08 18:53:21 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "ft_file_action.c"
#define DICT "../numbers.dict"

int		ft_matrix_row_count(void)
{
	int i;
	char *buf;
	int size;
	int row_count;

	size = ft_size_of_dict();
	buf = ft_create_buf();
	row_count = 0;
	i = 0;
	while (i < size)
	{
		if (buf[i] == '\n')
			row_count++;
		i++;
	}
	return (row_count);
}

void	ft_create_matrix(void)
{
	char *buf;
	int row_size;
	int col_size;
	int buf_size;
	int i;
	int j;
	char *matrix;

	i = 0;
	buf = ft_create_buf();
	buf_size = ft_size_of_dict();
	row_size = ft_matrix_row_count();
	col_size = 255;
	matrix = (char *)malloc(row_size * col_size * sizeof(char));


}

int		main(void)
{
	printf("%d\n", ft_create_matrix());
	return (0);
}
