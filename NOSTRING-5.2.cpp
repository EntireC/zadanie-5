#include "stdafx.h"
#include "iostream"
using namespace std;

int SumString(char s[], int length) {
	int sum = 0, add = 0;
	for (int i = 0; i < length; i++) {
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
	const int n = 100;
	char s[n];
	cin >> s;
	int length = 0;
	for (int i = 0; i < n && s[i] != '\0'; i++)	length++;
	cout << SumString(s, length) << endl;
}

