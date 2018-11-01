#include "pch.h"
#include <iostream>
using namespace std;
int numRule;
string binRule;
int rules[8];
void binToArray();
void menu();
string toBinary(int decimal);


int main() {
	menu();
}


void menu() {
	char charArray[8];
	cout << "What number of rule would you like? :";
	cin >> numRule;
	
	binRule = toBinary(numRule);
	strcpy_s(charArray, binRule.c_str());
	for (int i = 0; i < 8; ++i) {
		rules[i] = charArray[i];
	}
	binToArray();
}
		


	string toBinary(int decimal){
		int r;
		string binary;
		while (decimal > 0)
		{
			r = decimal % 2;
			binary = (r == 0 ? "0" : "1") + binary;
			decimal /= 2;
		}
		return binary;
	}
