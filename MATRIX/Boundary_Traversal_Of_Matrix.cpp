/*
You are given a matrix of dimensions n x m. The task is to perform boundary traversal on the matrix in a clockwise manner.

Input:
n = 4, m = 4
matrix[][] = {{1, 2, 3, 4},
         	 {5, 6, 7, 8},
         	 {9, 10, 11, 12},
         	 {13, 14, 15,16}}

Output: 1 2 3 4 8 12 16 15 14 13 9 5

Time Complexity = O(n+m)
Space Complexity = O(1)

*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> boundaryTraversal(vector<vector<int>> matrix, int row, int col)
{
	vector<int> v;
	if(row == 1)
	{
		for(int i=0; i<col; i++)
		{
			v.push_back(matrix[0][i]);
		}
		return v;
	}
	else if(col == 1)
	{
		for(int i=0; i<row; i++)
		{
			v.push_back(matrix[i][0]);
		}
		return v;
	}
	else
	{
		for(int i=0; i<col; i++)
		{
			v.push_back(matrix[0][i]);
		}
		for(int i=1; i<row; i++)
		{
			v.push_back(matrix[i][col-1]);
		}
		for(int i=col-2; i>=0; i--)
		{
			v.push_back(matrix[row-1][i]);
		}
		for(int i=row-2; i>0; i--)
		{
			v.push_back(matrix[i][0]);
		}
		return v;
	}
}

int main()
{
	int row,col;
	cin >> row >> col;
	vector<vector<int>> matrix(row,vector<int>(col,{}));
	//input matrix
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cin >> matrix[i][j];
		}
	}
	//function call
	vector<int> result = boundaryTraversal(matrix,row,col);

	//printing matrix
	for(int i=0; i<result.size(); i++)
		cout << result[i] << " ";
	return 0;
}