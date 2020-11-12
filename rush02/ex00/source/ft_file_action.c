/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_action.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 11:26:55 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/08 18:54:01 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#define DICT "../numbers.dict"

int		ft_open_file(char *path)
{
	return (open(path, O_RDONLY));
}

int		ft_close_file(int fd)
{
	return (close(fd));
}

int		ft_size_of_dict(void)
{
	int fd = ft_open_file(DICT);
	char symbols[1000];
	int i;

	read(fd, symbols, 1000);
	i = 0;
	while (symbols[i] != '\0')
		i++;
	
	i++;
	return (i);
}

char	*ft_create_buf(void)
{
	int fd = ft_open_file(DICT);
	int size = ft_size_of_dict();
	char *buf;
	
	buf = (char *)malloc(size * sizeof(char));

	read(fd, buf, size);
	ft_close_file(fd);

	return (buf);
}
