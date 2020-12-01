/*
	Given a matrix mat[][] of size N x N. The task is to print the elements of the matrix in the snake pattern.
	INPUT
	45 48 54
	21 89 87
	70 78 15
	
	OUTPUT
	45 48 54 87 89 21 70 78 15.

*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int matrix[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin >> matrix[i][j];
		}
	}
	for(int i=0; i<n; i++)
	{
		if(i%2 == 0)
		{
			for(int j=0; j<n; j++)
			{
				cout << matrix[i][j] << " ";
			}
		}
		else
		{
			for(int j=n-1; j>=0; j--)
			{
				cout << matrix[i][j] << " ";
			}
		}
	}
}