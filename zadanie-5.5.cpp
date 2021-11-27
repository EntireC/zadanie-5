#include "stdafx.h"
#include "iostream"
#include <string>
using namespace std;

int Appear(string s, string word) {
	int n = 0, counter = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == word[n]) n++;
		else n = 0;
		if (n == word.length()) {
			counter++;
			n = 0;
		}
	}
	return counter;
}

void main()
{
	string s, word;
	cout << "Enter the string" << endl;
	cin >> s;
	cout << "Enter the word" << endl;
	cin >> word;
	cout << Appear(s, word) << endl;
}

