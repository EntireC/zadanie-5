#include "stdafx.h"
#include "iostream"
#include <string>
using namespace std;

string Extension(string s, string ex) {
	for (int i = s.length()-1; i >= 0; i--) {
		if (s[i] == '.') {
			s.erase(i, s.length() - 1);
			s = s + ex;
			return s;
		}
	}
	s = s + ex;
	return s;
}

void main()
{
	string s, ex;
	cout << "Enter the filename (e.g. \"C:\\Folder\\Document.txt\")" << endl;
	cin >> s;
	cout << "Enter the new extention (e.g. \".bat\")" << endl;
	cin >> ex;
	rename(s.c_str(), Extension(s, ex).c_str());
}

