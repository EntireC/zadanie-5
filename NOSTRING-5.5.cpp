#include "stdafx.h"
#include "iostream"
using namespace std;

int Appear(char s[], char word[], int slength, int wordlength) {
	int n = 0, counter = 0;
	for (int i = 0; i < slength; i++) {
		if (s[i] == word[n]) n++;
		else n = 0;
		if (n == wordlength) {
			counter++;
			n = 0;
		}
	}
	return counter;
}

void main()
{
	const int n = 100, m = 100;
	char s[n], word[m];
	cout << "Enter the string" << endl;
	cin >> s;
	cout << "Enter the word" << endl;
	cin >> word;
	int slength = 0;
	for (int i = 0; i < n && s[i] != '\0'; i++)	slength++;
	int wordlength = 0;
	for (int i = 0; i < m && word[i] != '\0'; i++)	wordlength++;
	cout << Appear(s, word, slength, wordlength) << endl;
}

