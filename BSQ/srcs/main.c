/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 16:53:46 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/11 17:30:41 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>

void	process_file(t_gridinfo mygrid, char *filename)
{
	char	*charptr;

	if (!(mygrid.map = check_map(get_lines_from_grid(filename), mygrid.height)))
	{
		error("map error\n");
		return ;
	}
	charptr = mygrid.map[0];
	while (*charptr)
		charptr++;
	mygrid.sqrchr = *(charptr - 1);
	mygrid.empty = *(charptr - 3);
	do_square(mygrid);
}

void	calculate_dims(int file, char *filename)
{
	t_gridinfo	mygrid;
	char		c;
	char		temp;
	char		prev_c;

	c = 0;
	prev_c = 0;
	while (c != '\n' && read(file, &c, 1))
		;
	mygrid.width = 0;
	mygrid.height = 1;
	while (read(file, &c, 1))
	{
		if (mygrid.height == 1 && c != '\n')
			mygrid.width++;
		if (c == '\n')
			mygrid.height++;
		prev_c = temp;
		temp = c;
	}
	close(file);
	(c == '\n' && prev_c != '\n' && prev_c != '\0') ?
	process_file(mygrid, filename)
	: error("map error\n");
}

void	parse_file(char *filename)
{
	int			file;

	if ((file = open(filename, O_RDONLY)) < 0)
		error("map error\n");
	else
		calculate_dims(file, filename);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac == 1)
	{
		parse_file("map2");
		ft_putchar('\n');
	}
	while (i < ac)
	{
		parse_file(av[i]);
		if (i < ac)
			ft_putchar('\n');
		i++;
	}
	return (0);
}