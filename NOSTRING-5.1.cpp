#include "stdafx.h"
#include "iostream"
using namespace std;

bool Palindromic(char s[], int length) {
	for (int i = 0; i < length; i++) {
		if (s[i] != s[length - 1 - i]) return 0;
	}
	return 1;
}

void main()
{
	const int n = 100;
	char s[n];
	cin >> s;
	int length = 0;
	for (int i = 0; i < n && s[i]!='\0'; i++)	length++;
	if (Palindromic(s, length)) cout << "Yup, it's palindromic" << endl;
	else cout << "Nope, it's not palindromic" << endl;
}

