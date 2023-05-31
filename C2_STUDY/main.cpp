#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<vector<char>> v(5, vector<char>(15, '+'));

	for (int i = 0; i < 5; i++)
	{
		string temp;
		cin >> temp;
		for (int j = 0; j < temp.size(); j++)
		{
			v[i][j] = temp[j];
		}
	}

	string asdf;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (v[j][i] == '-') continue;
			asdf += v[j][i];
		}
	}
	cout << asdf;
}