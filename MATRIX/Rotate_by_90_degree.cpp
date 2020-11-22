/*
GFG
Given a square matrix of size N x N. The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space. 

	Time complexity is O(n^2)
    Space complexity is O(1)
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int matrix[n][n];
	//input matrix
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin >> matrix[i][j];
		}
	}
	//first transpose the matrix and then reverse the individual columns
	//transpose
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			swap(matrix[i][j],matrix[j][i]);
		}
	}
	//reverse columns
	for(int i=0; i<n; i++)
	{
		int top=0,down=n-1;
		while(top<down)
		{
			swap(matrix[top][i],matrix[down][i]);
			top++;
			down--;
		}
	}
	//printing
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}