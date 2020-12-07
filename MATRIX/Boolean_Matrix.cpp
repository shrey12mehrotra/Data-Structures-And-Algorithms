/*
Given a boolean matrix of size RxC where each cell contains either 0 or 1, 
modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1.

Input:
R = 4, C = 3
matrix[][] = {{ 1, 0, 0},
              { 1, 0, 0},
              { 1, 0, 0},
              { 0, 0, 0}}
Output: 
1 1 1
1 1 1
1 1 1
1 0 0 

Expected Time Complexity: O(R * C)
Expected Auxiliary Space: O(R + C) 
*/

#include<iostream>
#include<vector>
using namespace std;

void booleanMatrix(vector<vector<int> > &matrix)
    {
        int r = matrix.size();
        int c = matrix[0].size();
        int row[r]={};
        int col[c]={};
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(matrix[i][j] == 1)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
            	
                if(row[i] == 1 || col[j] == 1)
                {
                    matrix[i][j] = 1;
                }
            }
        }
    }
    

int main()
{
	int row,col;
	cin >> row >> col;
	//input matrix
	vector<vector<int>> matrix(row,vector<int>(col,{}));
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cin >> matrix[i][j];
		}
	}
	booleanMatrix(matrix);
	//output matrix
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout<< endl;
	}
	return 0;
}