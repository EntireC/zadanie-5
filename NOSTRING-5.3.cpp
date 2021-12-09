#include "stdafx.h"
#include "iostream"
using namespace std;


void main()
{
	const int n = 100;
	char surname[n], name[n], patronym[n];
	cout << "Type a name of a format: \"Surname Name Patronym\" (single spaces between words!)" << endl;
	cin >> surname >> name >> patronym;
	cout << name[0] << '.' << patronym[0] << ". " << surname << endl;
}

