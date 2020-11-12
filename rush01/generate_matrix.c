/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:08:29 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/01 15:32:36 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_charcount(char *str)
{
	int counter;
	char *str2;
	
	str2 = str;
	counter = 0;
	while(str2[counter])
	{
		counter++;
	}
    return counter;
}

int		charcheck(char *str)
{
	int i;
	char *str2;

	str2 = str;
	i = 0;

    while(str[i])
	{	
		if((str[i] < '1') || (str[i] > '4'))
		{ 
			return (1);
		}
		i += 2;
	}
	return 0;
}	
int		main(int argc, char **argv)
{
    int  matrix[6][6];
    int i;
    int j;
    int k;
    char *arguments;
    arguments = argv[1];

    if(!((argc == 2) && (ft_charcount(arguments) == 31) && (charcheck(arguments) == 1)))
	{
		ft_putchar('\n');
		write(1, &"Error", 5);
		return 1;
	}
    else
	{
	i = 0;
	j = 0;
	while(i < 6)
	{
		j = 0;
		while(j < 6)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 1;
	j = 0;
	k = 0;
	while(i < 5)
	{
		j = k;
		matrix[0][i] = arguments[j] - '0';
		j += 8;
		matrix[5][i] = arguments[j] - '0';
		j += 8;
		matrix[i][0] = arguments[j] - '0';
		j += 8;
		matrix[i][5] = argumen
using System;

class Program {
    public static void printFactors(int number, String parentFactors, int parentVal) {
    int newVal = parentVal;
    for (int i = number - 1; i >= 2; i--) {

        if (number % i == 0) {
            if (newVal > i) {
                newVal = i;
            }
            if (number / i <= parentVal && i <= parentVal
                    && number / i <= i) {
                System.out.println(parentFactors + i + "*" + number / i);
                newVal = number / i;
            }

            if (i <= parentVal) {
                printFactors(number / i, parentFactors + i + "*", newVal);
            }
        }

    }

}
    static void Main(string[] args) {
        printFactors(12,'',12)
    }
}ts[j] - '0';
		k += 2;
		i++;
	}
 
// remove this for loop after finishing. This is for visual check only.
     for(int x = 0; x < 6; x++){
         for (int y = 0; y < 6; y++){
             printf("%d ", matrix[x][y]);
         }
         printf("\n");
    }     
}
    return 0;
}
