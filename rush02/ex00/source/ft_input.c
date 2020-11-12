/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 11:48:42 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/08 20:48:28 by salaverd         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find);
int		ft_isnumber(char *str);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_create_buf(void);
int		ft_size_of_dict(void);
int		ft_strlen(char *str);

char	*ft_add_zeros(char c, int len)
{
	int i;
    char *res;

    i = 0;
    res = (char *)malloc(len * sizeof(char));
    res[i] = c;

	while (++i < len)
	{
		res[i] = '0';
	}
	res[i] = '\0';
	return (res);
}

char	*ft_check_two_len(char *input)
{
	char *result;
	int len;
	char *first;
	int strcmpRes;

	len = ft_strlen(input);
	strcmpRes = ft_strcmp(input, "20");
	if (strcmpRes < 0)
	{
		return (input);
	}
	else
	{
		first = ft_add_zeros(input[0], len);
		result = ft_strcat(first, input[1]);
	}
	return (result);
}

char	*ft_check_and_return(char *input)
{
	int len;
	int isnum;
	int i;
	char *res;
	int buf_size;
	char *buf;

	buf = ft_create_buf();
	buf_size = ft_size_of_dict();
	res = (char *)malloc(255 * sizeof(char));

	i = 0;
	isnum = ft_isnumber(input);
	if (isnum)
	{
		len = ft_strlen(input);
		if (len == 2)
		{
			res = ft_check_two_len(input);
		}
		else if (len == 1)
		{
			printf("%s\n", "not done yet :)");
			res = ft_strstr(buf, input);
		}
	}
	else
	{
		write(1, "Error", 5);
	}
	return (res);
}
