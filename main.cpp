#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<vector<string>> solveNQueen(int num);

int main()
{
	int num;
	vector<vector<string>> result;
	cout << "��Ҫ���̴�С�� " ;
	cin >> num;
	result = solveNQueen(num);
	cout << "����" << result.size() << "�ֽ���취" << endl;
}