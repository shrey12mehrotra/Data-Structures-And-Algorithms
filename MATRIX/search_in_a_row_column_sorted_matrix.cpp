/*
GFG
Given a matrix of size n x m, where every row and column is sorted in increasing order, and a number x. Find whether element x is present in the matrix or not.

	 Time Complexity: O(N + M)
	 Auxiliary Space: O(1)

*/
#include<iostream>
#include<vector>
using namespace std;

bool search(vector<vector<int> > matrix, int n, int m, int x) 
{
    int i=0,j=m-1;
    if(x < matrix[0][0])
    {
        return 0;
    }
    else if(x > matrix[n-1][m-1])
    {
        return 0;
    }
    else
    {
        while(i<n && j>=0)
        {
            if(matrix[i][j] == x)
                return 1;
            else if(matrix[i][j] < x)
                i++;
            else
                j--;
        }
        return 0;
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
	//input number to be found
	int x;
	cin >> x;
	//output display
	if(search(matrix,row,col,x))
		cout << "1\n";
	else
		cout << "0\n";
}