#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<vector<string>> solveNQueen(int num);

int main()
{
	int num;
	vector<vector<string>> result;
	cout << "需要棋盘大小： " ;
	cin >> num;
	result = solveNQueen(num);
	cout << "共有" << result.size() << "种解决办法" << endl;
}