#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<vector<string>> result;

bool check(int row,int col,vector<string>&chessborad,int num)
{
	for (int i = 0; i < row; i++)//检查列
	{
		if (chessborad[i][col] == 'Q')
			return false;
	}

	for (int i = row-1,j=col-1; i >=0&&j>=0; i--,j--)//检查左对角线
	{
		if (chessborad[i][j] == 'Q')
			return false;
	}

	for (int i = row-1,j=col+1; i >= 0&&j<num; i--,j++)//检查右对角线
	{
		if (chessborad[i][j] == 'Q')
			return false;
	}

	return true;
}

void tracking(int num,int row,vector<string>& chessbroad)
{
	if (row == num)
	{
		result.push_back(chessbroad);
		return;
	}

	for (int col = 0; col < num; ++col)
	{
		if (check(row, col, chessbroad,num))
		{
			chessbroad[row][col] = 'Q';
			tracking(num, row + 1, chessbroad);
			chessbroad[row][col] = '.';
		}
	}
}

vector<vector<string>> solveNQueen(int num)
{
	result.clear();
	vector<string> chessborad(num, string(num, '.'));
	tracking(num, 0, chessborad);
	return result;
}