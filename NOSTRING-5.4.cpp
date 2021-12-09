#include "stdafx.h"
#include "iostream"
using namespace std;

void Extension(char s[], char ex[], int slength, int exlength) {
	for (int i = slength - 1; i >= 0; i--) {
		if (s[i] == '.') {
			for (int j = i; j < slength; j++) {
				if (j-i < exlength) s[j] = ex[j-i];
				else s[j] = '\0';
				
			}
			return;
		}
	}
	for (int i = 0; i < exlength; i++) {
		s[slength + i] = ex[i];
	}
}

void main()
{
	const int n = 100, m = 10;
	char s[n], ex[m];
	int slength = 0, exlength = 0;
	cout << "Enter the filename (e.g. \"C:\\Folder\\Document.txt\")" << endl;
	cin >> s;
	char ss[n];
	cout << "Enter the new extention (e.g. \".bat\")" << endl;
	cin >> ex;
	for (int i = 0; i < n && s[i] != '\0'; i++) slength++;
	memcpy(ss, s, n);
	for (int i = 0; i < m && ex[i] != '\0'; i++) exlength++;
	Extension(s, ex, slength, exlength);
	rename(ss, s);
}

