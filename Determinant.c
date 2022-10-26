#include <stdio.h>
#include <stdlib.h>
int getCofactor(int p, int q, int n, int mat[n][n])
{
	int temp[n-1][n-1];
	int i = 0, j = 0;
	int row , col , result;
	for (row = 0; row < n; row++)
	{
		i = row - 1;
		j = 0;
		for (col = 0; col < n; col++)
		{
			if (row != p && col != q)
				temp[i][j++] = mat[row][col];
		}
	}
	result = determinantOfMatrix(n-1, temp);
	return result;
}

int determinantOfMatrix(int n , int mat[n][n])
{
	int D = 0;
	if (n == 1)
		return mat[0][0];
	int sign = 1;
	int f , val; 
	for (f = 0; f < n; f++)
	{
		val = getCofactor(0, f, n, mat);
		D += sign * mat[0][f] * val;
		sign = -sign;
	}
	return D;
}

void display(int row, int col , int mat[row][col])
{
	int i , j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			printf(" %d\t", mat[i][j]);
		printf("\n");
	}
}

int main()
{
	int row , i , j;
	printf("Enter the number of rows/columns of the matrix : ");
	scanf("%d",&row);
	printf("\nEnter the elements of the matrix : \n");
	int mat[row][row];
	for(i = 0 ; i < row ; i++)
		for(j = 0 ; j < row ; j++)
			scanf("%d",&mat[i][j]);
	printf("\nThe matrix is : \n");
	display(row, row, mat);
	printf("\nDeterminant of the matrix is : %d",determinantOfMatrix(row, mat));
	return 0;
}
