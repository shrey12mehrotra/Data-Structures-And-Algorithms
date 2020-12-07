/*
Given a matrix of size R*C. Traverse the matrix in spiral form.

R = 4, C = 4
matrix[][] = {{1, 2, 3, 4},
          	 {5, 6, 7, 8},
           	 {9, 10, 11, 12},
           	 {13, 14, 15,16}}
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

Expected Time Complexity: O(R*C)
Expected Auxiliary Space: O(R*C)
*/

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v)
{
	for(int i=0; i<v.size(); i++)
	{
		cout << v[i] << " ";
	}
}

void spiralTraversal(vector<vector<int>> &matrix, int row, int col)
{
	vector<int> v;
	int top=0,down=col-1,left=row-1,right=0;
	while(top <= down && right <= left)
	{
		for(int i=top; i<=down; i++)
		{
			v.push_back(matrix[right][i]);
		}
		right++;
		for(int i=right; i<=left; i++)
		{
			v.push_back(matrix[i][down]);
		}
		down--;
		if(right <= left)
		{
			for(int i=down; i>=top; i--)
			{
				v.push_back(matrix[left][i]);
			}
			left--;
		}
		if(top <= down)
		{
			for(int i=left; i>= right; i--)
			{
				v.push_back(matrix[i][top]);
			}
			top++;
		}
	}
	printVector(v);
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
	spiralTraversal(matrix,row,col);
	return 0;
}