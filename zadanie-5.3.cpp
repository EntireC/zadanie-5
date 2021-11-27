#include "stdafx.h"
#include "iostream"
#include <string>
using namespace std;

string NameConv(string s) {
	string name = "", surname = "", patronym = "";
	for (int i = 0; i < s.length(); i++) {
		//cout << s << endl;
		if (name == "") {
			if (s[i] == ' ') name = s[i + 1];
			else surname += s[i];
		}
		else if (s[i] == ' ') patronym = s[i + 1];
	} 
	name += ". " + patronym + ". " + surname;
	return name;
}

void main()
{
	string s;
	cout << "Type a name of a format: \"Surname Name Patronym\" (single spaces between words!)" << endl;
	getline(cin, s);
	cout << NameConv(s) << endl;
}

