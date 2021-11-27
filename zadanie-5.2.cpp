#include "stdafx.h"
#include "iostream"
#include <string>
using namespace std;

int SumString(string s) {
	int sum = 0, add = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '+') {
			sum += add;
			add = 0;
		}
		else {
			add *= 10;
			add += s[i] - '0';
		}
	}
	sum += add;
	return sum;
}

void main()
{
	string s;
	cin >> s;
	cout << SumString(s) << endl;
}

