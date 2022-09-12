#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include <stack>
#include <string>
using namespace std;
class Game 
{
public:
	int calPoints(vector<string> ops)
	{
		int score{ 0 };
		const int num1{ 5 };
		const int num2{ 2 };
		const int score1{ score + num1 };
		const int score2{ score1 + num2 };
		const int scoreC{ score2 - num2 };
		const int scoreD{ scoreC + (scoreC * 2) };
		const int scoreAdd{ (scoreC + (scoreC * 2)) + scoreD };
		score = scoreAdd;
		return { score };
	}
};
int main()
{
	vector<string> items;
	string item;
	string line;
	getline(cin, line);
	istringstream is(line);
	while (is >> item)
	{
		items.push_back(item);
	}
	Game sol;
	cout << sol.calPoints(items);
}