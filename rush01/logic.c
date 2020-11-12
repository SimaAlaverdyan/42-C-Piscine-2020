/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:03:48 by salaverd          #+#    #+#             */
/*   Updated: 2020/11/01 19:03:52 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

bool	rightMatrix(int matrix[][4], int up[], int down[], int right[], int left[])
{
	int row;
	int column;
	int count;
	int finalResult;
	char upSymbol;
	char downSymbol;
	char rightSymbol;
	char leftSymbol;
	char cell;
	
	//finalResult used for checking all blocks' correctness
	finalResult	= 0;
	count = 1;
	row = 0;
	//checking from left to right
	while (row < 4)
	{
		column = 0;
		leftSymbol = left[row]; 	
		printf("%d\n", leftSymbol);	
		while (column < 3)
		{
			cell = matrix[row][column];
			if (cell < matrix[row][column + 1])
			{
				count++;
			}		
			column++;
		}
		if (leftSymbol != count)
		{
			finalResult = 0;
			break;
			return false;
		}
		else if (leftSymbol == count)
		{
			finalResult = 1;
			count = 1;
			row++;
		}
	}

	//printf("%d\n", finalResult);
	//checking from right to left
	row = 0;
	while (row < 4)
	{
		column = 3;
		rightSymbol = right[row];		
		printf("%d\n", rightSymbol);
		while (column > 0)
		{
			cell = matrix[row][column];
			if (cell < matrix[row][column - 1])
			{
				count++;
			}
			column--;
		}
		if (leftSymbol != count)
		{
			finalResult = 0;
			break;
			return false;
		}
		else if (leftSymbol == count)
		{
			finalResult = 1;
			count = 1;
			row++;
		}
	}
	//printf("%d\n", finalResult);
	//checking from up to down	
	column = 0;
	while (column < 4)
	{		
		row = 0;
		upSymbol = up[column];
		printf("%d\n", upSymbol);
		while (row < 3)
		{
			cell = matrix[row][column];
			if (cell < matrix[row + 1][column])
			{
				count++;
			}
			row++;
		}
		if (upSymbol != count)
		{
			finalResult = 0;
			break;
			return false;
		}
		else if (upSymbol == count)
		{
			finalResult = 1;
			count = 1;
			column++;
		}
	}
	//printf("%d\n", finalResult);
	//checking from down to up
	column = 0;
	while (column < 4)
	{
		row = 3;
		downSymbol = down[column];
		while (row > 0)
		{
			cell = matrix[row][column];
			if (cell < matrix[row - 1][column])
			{
				count++;
			}
			row--;
		}
		if (downSymbol != count)
		{
			finalResult = 0;
			break;
			return false;
		}
		else if (downSymbol == count)
		{
			finalResult = 1;
			count = 1;
			column++;
		}
	}
	//printf("%d\n", finalResult);	
	//checking all blocks' result for returning true;
	if (finalResult == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int		main()
{
	int matrix[4][4] = 
	{{1, 2, 3, 4},
		{2, 3, 4, 1},
		{3, 4, 1, 2},
		{4, 1, 2, 3}
	};

	int left[4] = {4, 3, 2, 1};
	int right[4] = {1, 2, 2, 2};
	int up[4] = {4, 3, 2, 1};
	int down[4] = {1, 2, 2, 2};

	if (rightMatrix(matrix, up, down, right, left))
	{
		write(1, "1", 1);
	}
	else
	{
		write(1, "0", 1);
	}
	return 0;
}
