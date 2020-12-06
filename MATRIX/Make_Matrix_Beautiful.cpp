/*
A beautiful matrix is a matrix in which the sum of elements in each row and column is equal.
Given a square matrix of size NxN. Find the minimum number of operation(s) that are required to make the matrix beautiful.
In one operation you can increment the value of any one cell by 1.

Input:
N = 2
matrix[][] = {{1, 2},
              {3, 4}}
Output: 4
Explanation:
Updated matrix:
4 3
3 4
1. Increment value of cell(0, 0) by 3
2. Increment value of cell(0, 1) by 1
Hence total 4 operation are required.

Time complexity = O(n * n)
Space Complexity = O(1)
*/
#include<bits/stdc++.h>
using namespace std;

// function for finding minimum operations
int beautifulMatrix(vector<vector<int>> matrix, int n)
{
	int total = 0, max_sum = INT_MIN;
	for(int i=0; i<n; i++)
	{
		int row_sum = 0, col_sum = 0;
		for(int j=0; j<n; j++)
		{
			row_sum += matrix[i][j];
			col_sum += matrix[j][i];
		}
		max_sum = max(max_sum,row_sum);
		max_sum = max(max_sum,col_sum);
		total += row_sum;
	}
	return n*max_sum - total;
}

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> matrix(n,vector<int>(n,{}));
	// input matrix
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin >> matrix[i][j];
		}
	}

	//function call and printing
	cout << beautifulMatrix(matrix,n);
	return 0;
}