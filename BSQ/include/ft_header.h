/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 16:10:45 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/11 17:26:27 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_gridinfo {
	int		height;
	int		width;
	char	empty;
	char	obstacle;
	char	sqrchr;
	char	**map;
	int		x_bsq;
	int		y_bsq;
}				t_gridinfo;

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
void			error(char *err);
int				ft_atoi(char *str);

char			**check_map(char **map, int height);

char			**get_lines_from_grid(char *path_to_dict);
int				get_number_of_lines(char **lines);
char			*ft_file_missing(void);

void			do_square(t_gridinfo mygrid);

char			**ft_split(char *str, char *charset);

#endif
