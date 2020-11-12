/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:53:43 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/08 20:43:12 by salaverd         ###   ########.fr       */
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
char	*ft_check_and_return(char *input);
int		ft_isnumber(char *str);
char	*ft_strcat(char *dest, char src);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_create_buf(void);
int		ft_size_of_dict(void);

void	ft_search(char *input)
{
	char *in;
	int i;
	int j;
	char *first;
	char *second;
	int buf_size;
	char *buf;

	i = 0;
	j = 0;
	buf = ft_create_buf();
	buf_size = ft_size_of_dict();
	first = (char *)malloc(2 * sizeof(char));
	second = (char *)malloc(2 * sizeof(char));
	in = ft_check_and_return(input);
	while (in[i] != ' ')
	{	
		first[i] = in[i];
		i++;		
	}
	i++;
	while (in[i] != '\0')
	{
		second[j] = in[i];
		j++;
		i++;
	}
	if (ft_strlen(input) == 2)
	{
		printf("%s ", ft_strstr(buf, first));
		printf("%s\n", ft_strstr(buf, second));
	}
	else if (ft_strlen(input) == 1)
	{
		printf("%s\n", input);
		printf("%s\n", ft_strstr(buf, input));
	}
}
int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_search(argv[1]);
	}
	else
	{
		printf("%s\n", "not done yet :)");
	}
	return (0);
}
