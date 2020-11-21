/* 
    Write a program to find the transpose of a square matrix of size N*N.
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int matrix[n][n];

	// input a matrix

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin >> matrix[i][j];
		}
	}

	// tranpose of a matrix

	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			swap(matrix[i][j],matrix[j][i]);
		}
	}

	//printing of transposed matrix

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}