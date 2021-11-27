#include "stdafx.h"
#include "iostream"
#include <string>
using namespace std;

bool Palindromic(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != s[s.length() - 1 - i]) return 0;
	}
	return 1;
}

void main()
{
	string s;
	cin >> s;
	if (Palindromic(s)) cout << "Yup, it's palindromic" << endl;
	else cout << "Nope, it's not palindromic" << endl;
}

